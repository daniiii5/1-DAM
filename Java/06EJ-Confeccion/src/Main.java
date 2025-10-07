/**
 * Confeccionar un programa que permita cargar un numero entero
 * positivo de hasta tres cifras y muestre un mensaje
 * indicando si tiene 1, 2, 3 cifras.
 * Mostrar un mensaje de error si el numero de cifras es mayor
 * **/
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Introduzca un numero de máximo tres cifras: ");
        int num = scanner.nextInt();
        if(num < 10) {System.out.println("El numero "+ num + " tiene 1 cifra.");}
        else if(num < 100) {System.out.println("El numero "+ num + " tiene 2 cifra.");}
        else if(num < 1000) {System.out.println("El numero "+ num + " tiene 3 cifra.");}
        else {System.out.println("Error, el numero no es válido o tiene más de tres cifras.");}
        scanner.close();
    }
}