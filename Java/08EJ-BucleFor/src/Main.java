/*
 * Se realiza la carga de 10 valores enteros por teclado.
 * Se desea conocer:
 * a) La cantidad de valores ingresados negativos.
 * b) la cantidad de valores ingresados positivos
 * c) La cantidad de mÃºltiplos de 15.
 * d) El valor acumulado de los nÃºmeros ingresados que son pares.*/

import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num, negativos = 0, positivos = 0, pares = 0, multiplos = 0;
        System.out.println("Introduce 10 numeros: ");
        for(int i = 0; i < 10; i++) {
            num = scanner.nextInt();
            if (num < 0) negativos++;
            if (num > 0) positivos++;
        }
        System.out.println("Positivos: " + positivos + "\nNegativos: " + negativos + "\nSuma de pares: " + pares + "\nMultiplos de 15: " + multiplos);
        scanner.close();
    }
}
