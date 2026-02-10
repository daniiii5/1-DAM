import java.util.Scanner;
import java.util.Random;

public class Main {

    // --- CONFIGURACIÓN DEL JUEGO ---
    private final int ROWS = 8;        // Tamaño Fila
    private final int COLS = 8;        // Tamaño Columna
    private final int NUM_BARCOS = 3;  // Cantidad de barcos
    private final int MIN_SIZE = 2;
    private final int MAX_SIZE = 4;

    // --- SÍMBOLOS ---
    private final char AGUA = '▪';
    private final char BARCO = '⬜';   // Oculto al jugador
    private final char TOCADO = '💣';  // Cuadrado Rojo
    private final char FALLO = '❌';   // X Roja

    // --- VARIABLES GLOBALES ---
    private char[][] tablero;
    private Random random;
    private Scanner scanner;
    private int barcosHundidos = 0; // (Opcional) Para saber si ganaste

    public Main() {
        tablero = new char[ROWS][COLS];
        random = new Random();
        scanner = new Scanner(System.in);

        inicializarTablero();
        colocarBarcos();
        jugar(); // Inicia el bucle de juego
    }

    // 1. Llena todo de agua
    private void inicializarTablero() {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                tablero[i][j] = AGUA;
            }
        }
    }

    // 2. Lógica para colocar barcos (Horizontal y Vertical)
    private void colocarBarcos() {
        int colocados = 0;
        while (colocados < NUM_BARCOS) {
            int size = random.nextInt(MIN_SIZE, MAX_SIZE + 1);
            boolean horizontal = random.nextBoolean(); // true = Horizontal, false = Vertical

            int fila, col;

            // Intentar encontrar una posición válida
            if (horizontal) {
                fila = random.nextInt(ROWS);
                col = random.nextInt(COLS - size + 1);
            } else {
                fila = random.nextInt(ROWS - size + 1);
                col = random.nextInt(COLS);
            }

            if (esPosicionValida(fila, col, size, horizontal)) {
                dibujarBarcoEnMemoria(fila, col, size, horizontal);
                colocados++;
                // System.out.println("DEBUG: Barco puesto en " + fila + "," + col); // Descomentar para hacer trampa
            }
        }
    }

    // Verifica que no haya otros barcos estorbando
    private boolean esPosicionValida(int fila, int col, int size, boolean horizontal) {
        if (horizontal) {
            for (int j = col; j < col + size; j++) {
                if (tablero[fila][j] != AGUA) return false;
            }
        } else { // Vertical
            for (int i = fila; i < fila + size; i++) {
                if (tablero[i][col] != AGUA) return false;
            }
        }
        return true;
    }

    // Escribe el barco en el array
    private void dibujarBarcoEnMemoria(int fila, int col, int size, boolean horizontal) {
        if (horizontal) {
            for (int j = col; j < col + size; j++) {
                tablero[fila][j] = BARCO;
            }
        } else {
            for (int i = fila; i < fila + size; i++) {
                tablero[i][col] = BARCO;
            }
        }
    }

    // --- BUCLE DEL JUEGO ---
    public void jugar() {
        boolean jugando = true;
        System.out.println("¡Bienvenido a Batalla Naval 2D!");
        System.out.println("Dispara ingresando Fila y Columna.");

        while (jugando) {
            imprimirTablero(false); // false = NO mostrar barcos ocultos

            System.out.println("\n¿A dónde disparamos, Capitán?");

            int f = pedirCoordenada("Fila (0-" + (ROWS - 1) + "): ", ROWS);
            int c = pedirCoordenada("Columna (0-" + (COLS - 1) + "): ", COLS);

            procesarDisparo(f, c);
        }
    }

    // Método auxiliar para pedir datos sin errores
    private int pedirCoordenada(String mensaje, int limite) {
        int dato = -1;
        while (true) {
            System.out.print(mensaje);
            if (scanner.hasNextInt()) {
                dato = scanner.nextInt();
                if (dato >= 0 && dato < limite) {
                    return dato;
                }
            } else {
                scanner.next(); // Limpiar basura del scanner
            }
            System.out.println("¡Coordenada inválida! Intenta de nuevo.");
        }
    }

    private void procesarDisparo(int f, int c) {
        char celda = tablero[f][c];

        if (celda == AGUA) {
            System.out.println("\n>>> ¡AGUA! Has fallado. <<<");
            tablero[f][c] = FALLO; // ❌
        }
        else if (celda == BARCO) {
            System.out.println("\n>>> ¡BOOM! ¡IMPACTO CONFIRMADO! <<<");
            tablero[f][c] = TOCADO; // 🟥
        }
        else if (celda == TOCADO || celda == FALLO) {
            System.out.println("\nYa disparaste ahí, Capitán. Gasta munición en otro lado.");
        }
    }

    // Imprime el tablero bonito
    public void imprimirTablero(boolean mostrarBarcos) {
        System.out.print("   "); // Espacio para esquina
        for (int j = 0; j < COLS; j++) System.out.printf("%-3d", j); // Cabecera columnas
        System.out.println();

        for (int i = 0; i < ROWS; i++) {
            System.out.printf("%-3d", i); // Cabecera fila
            for (int j = 0; j < COLS; j++) {
                char c = tablero[i][j];
                // LÓGICA DE VISUALIZACIÓN
                if (c == BARCO && !mostrarBarcos) {
                    System.out.printf("%-3s", AGUA); // Ocultar barco
                } else {
                    System.out.printf("%-3s", c); // Mostrar tal cual (Agua, Tocado, Fallo)
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        new Main();
    }
}