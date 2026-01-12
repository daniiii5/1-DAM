import java.util.Scanner;
public class Triangulo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce la base deseada del triangulo: ");
        int base = sc.nextInt();
        for (int i = 0;i <= base ;i+=2) {
            int spaces = (base-i)/2;
            // Imprime los espacios antes del simbolo
            for (int k = spaces; k>= 0; k--) System.out.print("   ");
            // Imprime la cantidad de simbolos
            if (base%2==0) for (int j = i; j > 0 ; j--) System.out.print(" * ");
            if (base%2!=0) for (int j = i; j >= 0 ; j--) System.out.print(" * ");
            System.out.print("\n\n");
        }
        for (int i = base/2; i >= 0;i--) {
            int limit = 0;
            if (base%2==0) limit = (base+1)/3;
            if (base%2!=0) limit = base/3-1;
            for (int j = limit*2; j >= 0; j--) System.out.print("   ");
            for (int j = limit; j >= 0; j--) System.out.print(" * ");
            System.out.print("\n");
        }
    }
}
