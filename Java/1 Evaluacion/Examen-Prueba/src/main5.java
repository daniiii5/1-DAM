/*Realiza un programa que pida por teclado una cadena cualquiera, el
programa debe imprimir la cadena en orden inverso, es decir al revés
los espacios deben sustituirse por @. (2 puntos)
Ejemplo: -----entrada--��hola soy paco ----salida----�� ocap@yos@aloh*/


import java.util.Scanner;
public class main5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Introduce una cadena de caracteres para invertir: ");
        String phrase = input.nextLine().replaceAll(" ", "@");
        for (int step = phrase.length()-1; step >= 0; step--) System.out.print(phrase.charAt(step));
    }
}
