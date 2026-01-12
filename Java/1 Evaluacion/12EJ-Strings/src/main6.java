// 1.	Cargar un String por teclado e implementar las siguientes funciones:
//a) Imprimir la primera mitad de los caracteres de la cadena.
//b) Imprimir el último carácter.
//c) Imprimirlo en forma inversa.
//d) Imprimir cada carácter del String separado con un guión.
//e) Imprimir la cantidad de vocales almacenadas.

import java.util.Scanner;
public class main6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce una palabra: ");
        String charLine = sc.next();
        // a) Imprimir la primera mitad de los caracteres de la cadena.
        System.out.print("Primera mitad de la palabra: ");
        System.out.println(charLine.substring(charLine.length(), charLine.length()/2));
        //b) Imprimir el último carácter.
        System.out.println("\nUltima letra: " + charLine.charAt(charLine.length()-1));
        //c) Imprimirlo en forma inversa.
        System.out.print("Palabra inversa: ");
        for (int i = charLine.length()-1;i>=0;i--) System.out.print(charLine.charAt(i));
        //d) Imprimir cada carácter del String separado con un guión.
        System.out.println("\nString separado con un guión: ");
        for (int i = 0; i < charLine.length(); i++) {
            System.out.print(charLine.charAt(i));
            if (charLine.length()-1 != i) System.out.print("-");
        }
        //e) Imprimir la cantidad de vocales almacenadas.
        int vocales = 0;
        for (int i = 0; i < charLine.length(); i++) {
            if (charLine.charAt(i) == 'a' ||
            charLine.charAt(i) == 'e' ||
            charLine.charAt(i) == 'i' ||
            charLine.charAt(i) == 'o' ||
            charLine.charAt(i) == 'u'
            ) vocales++;
        }
        System.out.println("\nString contiene " + vocales + " vocales.");
    }
}
