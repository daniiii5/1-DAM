// 3.	Realizar la búsqueda de un string clave en un string fuente.
// Se deberá ingresar una frase o texto (fuente) y luego la clave a buscar.
// En caso de encontrarla, imprimir la posición, de lo contrario una leyenda.

import java.util.Scanner;
public class main3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce una frase: ");
        String frase = sc.nextLine().toLowerCase();
        System.out.println("Introduce una palabra a buscar: ");
        String key = sc.next().toLowerCase();
        if (frase.indexOf(key) > 0) {
            System.out.println("La posición del numero es " + frase.indexOf(key));
        } else {
            System.out.println("No se ha encontrado la palabra en la frase. ");
        }

    }
}