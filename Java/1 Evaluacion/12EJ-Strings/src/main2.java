import java.util.Scanner;

// 2.	Igual al anterior, pero que termine la aplicación
// sin contemplar mayúsculas ni minúsculas. Es decir que para
// salir se pueda teclear fin, Fin o FIN.

public class main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Introduce nombres, cuando termine, introduzca 'fin': ");
        boolean loop = true;
        String nombre = "";
        String fin = "fin";
        int i = 0;

        do {
            i++;
            nombre = sc.next();
        } while (!(nombre.toLowerCase()).equals(fin));

        System.out.println("Has introducido " + (i-1) + " nombres.");


    }
}
