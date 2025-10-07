/**
 * Programa que pide un número y dice si es un número perfecto
 * Un número perfecto es un número entero positivo que es
 * igual a la suma de sus divisores propios positivos
 * (todos sus divisores excepto el propio número).
 * El primer número perfecto es el 6, ya que sus divisores
 * propios son 1, 2 y 3, y 1 + 2 + 3 = 6.
 * Otros números perfectos conocidos son 28, 496 y 8128
 * */
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num, sum = 0;
        System.out.println("Introduce un numero: ");
        num = scanner.nextInt();
        for (int i = num-1; i > 0; i--) if(num % i == 0) sum += i;
        if(num == sum) System.out.println("El numero " + num + " es perfecto.");
        else System.out.println("El numero " + num + " no es perfecto.");
        scanner.close();
    }
}