import java.util.Random;
import java.util.Scanner;

public class Main {

    private static final boolean debug = false;
    private final int size = 10;
    private static final int[] boatsize = {5, 4, 3, 3, 2};
    private static final String[] boatcolors = {"\uD83D\uDFE5", "\uD83D\uDFE7", "\uD83D\uDFE8", "\uD83D\uDFE9", "\uD83D\uDFE6"};
    private static final Random r = new Random();
    Scanner input = new Scanner(System.in);

    public static void main() {
        Main Main = new Main();
        String[][] youTable = Main.createTable(Main.size);
        Main.addBoats(youTable, boatsize, boatcolors);
        String[][] enemyTable = Main.createTable(Main.size);
        Main.addBoats(enemyTable, boatsize, boatcolors);
        int posy, posx, botLastPosy = -1, botLastPosx = -1, botPosx = -1, botPosy = -1;
        boolean botHit = false;
        do {
            Main.drawTwice(youTable, enemyTable, 1);

            do {
                System.out.println("Debes introducir una posicion valida.");
                System.out.println("Introduce una posicion para disparar al enemigo: ");
                posy = Main.askPos('y')-1;
                posx = Main.askPos('x')-1;
            } while(!Main.verifyChoice(youTable, posy, posx));

            Main.shoot(enemyTable, posy, posx);
            if (Main.checkWin(youTable)) {
                System.out.println("Ganaste!");
                break;
            }
            System.out.println("Turno del bot!");
            if (botHit) {
                botHit = Main.shoot(youTable, botLastPosy+(r.nextBoolean() ? 1 : -1), botLastPosx+(r.nextBoolean() ? 1 : -1));
            } else {
                do {
                    botPosy = r.nextInt(Main.size);
                    botPosx = r.nextInt(Main.size);
                } while(!Main.verifyChoice(youTable, botPosy, botPosx));
                botHit = Main.shoot(youTable, botPosy, botPosx);
            }

            botLastPosy = botPosy;
            botLastPosx = botPosx;

            if (Main.checkWin(enemyTable)) {
                System.out.println("Ha ganado el BOT.");
                break;
            }
        } while(true);
    }

    int askPos(char c) {
        System.out.println("Introduce una posicion (Coordenadas " + c + "): ");
        return input.nextInt();
    }

    String[][] createTable(int size) {
        String[][] t = new String[size][size];
        for (int y = 0; y < size; y++) {
            for (int x = 0; x < size; x++) {
                t[y][x] = "·";
            }
        }
        return t;
    }

    void draw(String[][] t, boolean enemy) {
        // Pintar las posiciones de las columnas de la tabla en arriba del todo
        System.out.print(" ");
        for (int i = 1; i <= size; i++) System.out.print(" " + i + " ");
        System.out.println();
        // Pintar valores de los barcos con las posiciones de las filas
        for (int y = 0; y < size; y++) {

            if (y < 9) System.out.print(y+1 + " ");
            else System.out.print(y+1);

            for (int x = 0; x < size; x++) {
                if (t[y][x].equals("·")) System.out.print(" " + t[y][x] + " ");
                else System.out.print(" " + t[y][x]);

            }
            System.out.println();
        }
    }

    void drawTwice(String[][] t1, String[][] t2, int enemy) {
        // Pintar las posiciones de las columnas de la tabla en arriba del todo
        String spacing = "                                          ";
        for (int turn = 0; turn < 2; turn++) {
            System.out.print(" ");
            for (int i = 1; i <= size; i++) System.out.print(" " + i + " ");
            System.out.print(spacing);
        }
        System.out.println();
        // Pintar valores de los barcos con las posiciones de las filas
        for (int y = 0; y < size; y++) {

             for (int turn = 0; turn < 2; turn++) {
                 String[][] table;
                 if (turn == 0) table = t1;
                 else table = t2;

                 if (y < 9) System.out.print(y+1 + " ");
                 else System.out.print(y+1);

                 for (int x = 0; x < size; x++) {
                 if (enemy == turn) {
                     if (debug) {
                         if (table[y][x].equals("·")) System.out.print(" " + table[y][x] + " ");
                         else System.out.print(" " + table[y][x]);
                     }
                     else if (table[y][x].equals("\uD83D\uDCA5")) System.out.print(" " + table[y][x]);
                     else if (table[y][x].equals("\uD83D\uDCA6")) System.out.print(" " + table[y][x]);
                     else System.out.print(" · ");


                 } else {
                     if (table[y][x].equals("·")) System.out.print(" " + table[y][x] + " ");
                     else System.out.print(" " + table[y][x]);
                 }

                }
                System.out.print(spacing);
             }
             System.out.println();

        }

    }

    void addBoats(String[][] t, int[] boatsize, String[] boatcolors) {

        // Bucle por los tamaños de los barcos
        for (int i = 0; i < boatsize.length; ) {

            // Datos necesarios para generar el barco, posicion x e y inixiales,
            // o si se pintara en horizontal
            int posx = r.nextInt(size);
            int posy = r.nextInt(size);
            boolean h = r.nextBoolean();

            // Verificar si se puede pintar el barco
            if (verifyAddBoat(posx, posy, boatsize[i], h, t)) {
                // Añadir el barco
                for (int b = 0; b < boatsize[i]; b++) {
                    // Añadir el barco horizontalmente
                    if (h) t[posx+b][posy] = boatcolors[i];
                    // Añadir el barco verticalmente
                    else t[posx][posy+b] = boatcolors[i];
                }
                i++;
            }
        }

    }

    boolean verifyAddBoat(int posx,
                   int posy,
                   int boatSize,
                   boolean horizontal,
                   String[][] table) {
        int tableSize = table.length;

        if (horizontal) {
            // 1. Verificar si el barco se sale del tablero (Límites)
            if (posx + boatSize > tableSize) return false;

            // 2. Verificar si hay otro barco (Colisiones)
            for (int i = 0; i < boatSize; i++) {
                if (!table[posx + i][posy].equals("·")) {
                    return false;
                }
            }
        } else {
            // 1. Verificar límites
            if (posy + boatSize > tableSize) return false;

            // 2. Verificar colisiones
            for (int i = 0; i < boatSize; i++) {
                if (!table[posx][posy + i].equals("·")) {
                    return false;
                }
            }
        }

        // Si ha pasado todas las pruebas, es seguro pintar
        return true;
    }

    boolean shoot(String[][] t, int posy, int posx) {
        if (t[posy][posx].equals("·")) {
            t[posy][posx] = "\uD83D\uDCA6";
            System.out.println("Has fallado!");
            return true;
        }
        else {
            String boat = t[posy][posx];
            t[posy][posx] = "\uD83D\uDCA5";
            boolean exists = checkBoatExistence(t, boat);
            if (!exists) System.out.println("Has hundido un barco!");
            else System.out.println("Has acertado!");
            return true;
        }
    }

    boolean checkBoatExistence(String[][] t, String boat) {
        int tableSize = t.length;
        for (String[] strings : t) {
            for (int x = 0; x < tableSize; x++) {
                if (strings[x] == boat) return true;
            }
        }
        return false;
    }

    boolean checkWin(String[][] t) {
        int tableSize = t.length;
        for (int y = 0; y < tableSize; y++) {
            for (int x = 0; x < tableSize; x++) {
                if (t[y][x] != "·") return false;
            }
        }
        return true;
    }

    boolean verifyChoice(String[][] t, int posy, int posx) {
        if (!(t[posy][posx].equals("\uD83D\uDCA6")) &&
                !(t[posy][posx].equals("\uD83D\uDCA5")) &&
                posy < 10 && posy > 0 &&
                posx < 10 && posx > 0
        )
            return true;
        return false;
    }
}