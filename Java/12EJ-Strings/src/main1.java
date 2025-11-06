import java.util.Scanner;

// 1.	Ingresar una serie de nombres por teclado hasta
// que se cargue la palabra Fin, y mostrar cuántos nombres se ingresaron.

public class main1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Introduce nombres, cuando termine, introduzca 'Fin': ");
        boolean loop = true;
        String nombre = "";
        int i = 0;
        for(;!nombre.equals("Fin"); i++) {
            nombre = sc.next();
        }
        System.out.println("Has introducido " + (i-1) + " nombres.");
    }
}