import java.util.Scanner;

public class ejer5 {
    public static void main(String[] args) {
        ejer5 main = new ejer5();
        Scanner input = new Scanner(System.in);
        int num = -1;
        do {
            System.out.print("Introduce un numero: ");
            try {
                num = input.nextInt();
            } catch (Exception e) {
                System.err.println("Por favor, introduce un numero valido.");
                continue;
            }
            System.out.println(main.esParYPositivo(num));
            break;
        } while (true);
    }

    public boolean esParYPositivo(int num) {
        return num % 2 == 0 && num > 0;
    }
}
