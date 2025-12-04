import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main main = new Main();
        main.init();
    }

    private void init() {
        int num = -1;

        Scanner input = new Scanner(System.in);
        do {
            try {
                System.out.print("Introduce un numero para ver si es primo: ");
                num = input.nextInt();
                break;
            } catch (Exception e) {
                System.err.print("Debes introducir un numero valido");
                input.next();
                System.out.println("\n");
            }
        }
        while(true);

        if (esPrimo(num)) System.out.println("El numero " + num + " es primo.");
        else System.out.println("El numero " + num + " no es primo.");
    }

    private boolean esPrimo(int num) {
        boolean primo = true;
        for (int i = num; i >= 1; i--) {
            if (num != i && i != 1 && num % i == 0) primo = false;
        }
        return primo;
    }
}
