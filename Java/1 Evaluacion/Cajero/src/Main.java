import java.io.InputStream;
import java.lang.reflect.Array;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    private static float balance = 1411511;

    [
        {
            "dni":"4742756T",
            "saldo":12912
        },
        {
            "dni":"134634D",
            "saldo":95423
        }
    ]
    Array store = [["dani", 12912],["hugo",9115423]];

    public static void main(String[] args) {
        Main actions = new Main();
        Scanner input = new Scanner(System.in);
        int option = 0;
        float amount = 0;
        System.out.print("=== Cajero ===\n" +
                "1. Ingresar\n" +
                "2. Retirar\n" +
                "3. Saldo\n"+
                "==========");
        do {
            do {
                System.out.print("\nOpcion: ");
                try {
                    option = input.nextInt();
                    System.out.println("\n");
                    break;
                } catch (InputMismatchException e) {
                    option = 0;
                    System.out.println("Debes introducir un numero.");
                }
            } while(true);
        } while (option < 1 || option > 3);
        System.out.print("\n");

        if (option == 1) {
            do {
                System.out.print("Introduce la cantidad a ingresar en el banco: ");
                try {
                    amount = input.nextFloat();
                    System.out.println("\n");
                    break;
                } catch (InputMismatchException e) {
                    System.out.println("Debes introducir un numero valido, o reemplazar el punto por una coma.");
                    amount = 0;
                }
            } while(true);
            boolean status = actions.ingresar(amount);
            if (status) {
                System.out.println("Se ha ingresado el dinero");
                System.out.println("El saldo es de " + Main.balance);
            } else System.out.println("Ha ocurrido un error inesperado");
        }

    }

    public boolean ingresar(float amount) {
        Main.balance += amount;
        return true;
    }

    public boolean retirar(float amount) {
        return true;
    }

    public float saldo() {
        return 0;
    }
}
