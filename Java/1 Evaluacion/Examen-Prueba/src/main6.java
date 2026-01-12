/*
* 6. Escriba un programa en Java que juegue a &quot;piedra-papel-tijera&quot; con el
usuario. Al ser invocado, el programa escoge uno de estos tres
elementos al azar, luego pregunta al usuario por uno de ellos, y
finalmente los compara para indicar cuál es el ganador. (2 puntos)
Normas:
○ La piedra aplasta la tijera.
○ La tijera corta el papel.
○ El papel envuelve la piedra.
○ Empate en caso de que dos jugadores elijan el mismo elemento

System.out.println(&quot;Juego piedra-papel-tijera&quot;);
Scanner teclado = new Scanner(System.in);

int opcionCompu = (int)(Math.random() * 3) + 1;
System.out.println(&quot;La computadora ya escogió...&quot;);

System.out.print(&quot;Indique su selección [1=Piedra, 2=Papel, 3=Tijera]: &quot;);
int opcionUsuario = teclado.nextInt();
* */
import java.util.InputMismatchException;
import java.util.Scanner;
public class main6 {
    public static void main(String[] args) {
        int chose = -1;
        Scanner input = new Scanner(System.in);
        System.out.println("=============== Juego de Piedra, Papel y Tijera ===============" +
                "Reglas:" +
                "○ La piedra aplasta la tijera.\n" +
                "○ La tijera corta el papel.\n" +
                "○ El papel envuelve la piedra.\n" +
                "○ Empate en caso de que dos jugadores elijan el mismo elemento");
        do {
            chose = 0;

            int opcionCompu = (int)(Math.random() * 3) + 1;
            System.out.println("El ordenador ya ha elegido.");

            System.out.print("Escoge una elección:" +
                    "[1=Piedra, 2=Papel, 3=Tijera, 4=Salir]: ");
            try {
                chose = input.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Debes Introducir un numero, no se admiten letras.");
                input.nextLine();
            }
        boolean win = false;
        System.out.println(opcionCompu);
        System.out.println(chose);
        System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n");
        if (opcionCompu == chose) {
             System.out.println("Empate!");
             System.out.print("\n\n");
             continue;
        }
        else if (opcionCompu == 1 && chose == 2) win = true;
        else if (opcionCompu == 1 && chose == 3) win = false;
        else if (opcionCompu == 2 && chose == 1) win = false;
        else if (opcionCompu == 2 && chose == 3) win = true;
        else if (opcionCompu == 3 && chose == 1) win = true;
        else if (opcionCompu == 3 && chose == 2) win = false;
        else if (chose == 4) break;
        else if (chose != 4){
            System.out.println("Debes introducir un numero entre el 1 y el 3 para jugar!");
            continue;
        }

        if (win) System.out.println("Has ganado tu!");
        else System.out.println("He ganado yo!");
        System.out.print("\n\n");

        } while (true);

    }
}
