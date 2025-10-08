import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int opcion = 100;
        float price = 0f;
        float cantMelon = 0, cantSand = 0, cantKiwi = 0;
        float priceMelon = 1.76f, priceSand = 0.90f, priceKiwi = 2.80f;

        do {
            System.out.println("FRUTERIA");
            System.out.println("1. Melon");
            System.out.println("2. Sandia");
            System.out.println("3. Kiwi");
            System.out.println("4. Calcular");
            System.out.println("5. Salir");

            System.out.println("Introduzca una opcion: ");
            opcion = new Scanner(System.in).nextInt();

            if (opcion == 1) {
                cantMelon+=1;
            } else if (opcion == 2) {
                cantSand+=1;
            } else if (opcion == 3) {
                cantKiwi+=1;
            } else if (opcion == 4) {
                price = price+cantMelon*priceMelon+cantSand*priceSand+cantKiwi*priceKiwi;
                cantMelon = 0;
                cantSand = 0;
                cantKiwi = 0;
                System.out.println("Precio total actual es de " + price);
            } else if (opcion == 5) {
                System.out.println("Hasta pronto!");
            } else {
                System.out.println("❌ Opcion no existe.");
            }
        } while (opcion != 5);
    }
}
