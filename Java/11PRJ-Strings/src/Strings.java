import java.util.Scanner;

public class Strings {
    public static void main(String[] args) {
        String nombre, nombre2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduzca un nombre: ");
        nombre = sc.next();
        System.out.println("Introduzca un apellido: ");
        nombre2 = sc.next();

        // Son objetos, no variables
        if (nombre.equals(nombre2)) {
            System.out.println("Son iguales.");
        } else {
            System.out.println("No son iguales.");
        }
        sc.close();
    }
}