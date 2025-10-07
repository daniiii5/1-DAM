/* 
 * Desarrollar un programa que pida por pantalla un numero, y que a 
 * continuación imprima su tabla de mutiplicar
 */
import java.util.Scanner;
public class TablaMultiplicar {
    public static void main(String[] args) {
        int second = 1;
        System.out.println("Introduce un numero: ");
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        System.out.println("Tabla de multiplicar de " + num);
        while (second <= 10) {
            System.out.println(num + " x " + second + " = " + num * second);
            second++;
        }
        scanner.close();
    }

}
