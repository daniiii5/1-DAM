import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int nu8m = 0;
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Introduzca un numero: ");
            nu8m = sc.nextInt();
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println(nu8m);
    }
}
