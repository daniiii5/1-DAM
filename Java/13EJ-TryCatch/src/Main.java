/*Escribe un programa en Java que solicite al usuario dos números enteros a
través de la consola. El programa debe realizar las siguientes acciones:
Calcular y mostrar el resultado de la división del primer número por el segundo.
Implementa un bloque try-catch para manejar específicamente la excepción
ArithmeticException que ocurre si el usuario intenta dividir por cero.
Si se produce la excepción, el bloque catch debe imprimir un mensaje de
error amigable en la consola, como: "Error: No se puede dividir por cero.
Por favor, introduce un divisor diferente de cero."*/


import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = -1;
        int second = -1;
        boolean loop = true;
        do {
            System.out.print("Introduce el primer numero: ");
            first = sc.nextInt();
            System.out.print("Introduce el segundo numero: ");
            second = sc.nextInt();

            try {
                System.out.println("La division de los numeros es " + (first/second));
                loop = false;
            } catch (ArithmeticException e) {
                System.out.println("No se puede dividir entre cero.");
            } catch (Exception h) {
                System.out.println("Ha ocurrido un error inesperado: " + h);
            }

        } while (loop);
    }
}
