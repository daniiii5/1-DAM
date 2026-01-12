/*Realiza un programa que pida un número por teclado el número
debe ser pasado como parámetro a una segunda clase a través de
una función y verificar si el número es par o no lo es. El programa
imprime una leyenda diciendo si el número es par o no lo es.
(2 puntos)
Public boolean esPar(Int num){}*/


import java.util.Scanner;
public class main3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Introduce un numero: ");
        int num = input.nextInt();
        if (esPar(num)) System.out.println("El numero " + num + " es par");
        else System.out.println("El numero " + num + " es impar");
    }

    public static boolean esPar(int num){
        if (num % 2 == 0) return true;
        else return false;
    }
}
