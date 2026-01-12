//Programa que solicita dos numweros por teclado
//y una operacion 1.sumar 2. restar 3. mult. 4. dividir
//realiza la operacion seleccionada
//Controlar los caso de uso necesarios
//para que las operaciones se puedna ejecutar

import java.util.Scanner;
public class SwitchCalculo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce dos numeros: ");
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        int opcion = 0;
        while(opcion <= 0 || opcion > 4) {
            System.out.println("Introduce una operacion:\n1. Suma\n2. Resta\n3. Multiplicar\n4. Dividir");
            opcion = sc.nextInt();
        }
        switch (opcion) {
            case 1:
                System.out.println("El resultado es " + (num1 + num2));
                break;
            case 2:
                System.out.println("El resultado es " + (num1 - num2));
                break;
            case 3:
                System.out.println("El resultado es " + (num1 * num2));
                break;
            case 4:
                System.out.println("El resultado es " + (num1 / num2));
                break;
        }
        sc.close();
    }
}
