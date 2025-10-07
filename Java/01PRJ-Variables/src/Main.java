// Validar un sueldo si es mayor de 3000 se solicita que el usuario pague impuestos
// en caso de pagar impuesto se resta del salario el 10%
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {

        //VARIABLES
        float sueldo;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Introduzca el importe de su sueldo actual ");
        sueldo = scanner.nextFloat();

        if (sueldo > 3000) {
            System.out.println("Debe pagar impuestos");
            System.out.println("Te quedas con: "+ (sueldo*0.9));
            System.out.println("Deberás pagar: "+ (sueldo*0.1) + "€ en impuestos.");
        } else {
            System.out.println("No tienes que pagar impuestos");
        }
        scanner.close();
    }

}
