import java.util.Scanner;

public class ejer2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float pizza_price = 10;
        // 3 or more pizzas 10%
        float dscn3 = 0.1f;
        // 5 or more pizzas 20%
        float dscn5 = 0.2f;
        // Student?
        boolean student = false;
        float dscn_student = 0.05f;
        float price = 0;


        int amount;
        String student_output = null;
        String output = "";

        do {
            output = "";
            System.out.print("\nNumero de pizzas: ");
            try {
                amount = input.nextInt();
            } catch (Exception e) {
                System.err.println("Debes introducir un numero valido.");
                input.next();
                continue;
            }
            System.out.print("\nEstudiante? [si, no]: ");
            student_output = input.next();
            if (student_output.equalsIgnoreCase("si")) student = true;
            else student = false;

            price = pizza_price*amount;
            output = "Importe Base: " + price;

            if (amount >= 5) {
                output += "\nDescuento por cantidad (20%): " + price*dscn5;
                price = (price-(price*dscn5));
            } else if (amount >= 3) {
                output += "\nDescuento por cantidad (10%): " + price*dscn3;
                price = (price-(price*dscn3));
            }

            if (student) {
                output += "\nEl descuento de estudiante (5%) se aplica tras el primer descuento";
                price = (price-(price*dscn_student));
            }
            output += "\nTotal a pagar: " + price + "€";
            break;
        } while (true);
        System.out.println(output);

    }
}
