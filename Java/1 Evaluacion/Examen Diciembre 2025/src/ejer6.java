import java.util.Scanner;

public class ejer6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int vidas = 5;
        int maxnum = 50;
        boolean win = false;
        int num = (int) (Math.random()*maxnum+1);
        int guess = -1;
        System.out.println("Debes adivinar el numero en el que estoy pensando, tienes 5 intentos.");
        do {
            System.out.println("Vidas " + vidas);
            System.out.print("\n¿En que numero estoy pensando?: ");
            try {
                guess = input.nextInt();
            } catch (Exception e) {
                System.err.println("Incorrecto! Debes Introducir un número valido.");
                System.err.println("-1 Vidas");
                vidas--;
                input.next();
                continue;
            }
            if (num == guess) win = true;
            else if (vidas == 1) break;
            else if (num < guess) System.err.println("El numero es menor! Prueba de nuevo.");
            else if (num > guess) System.err.println("El numero es mayor! Prueba de nuevo.");
            vidas--;
        } while (vidas > 0 && !win);

        if (win) System.out.println("¡HAS GANADO!");
        else System.out.println("GAME OVER");
    }
}
