// 1.	Ingresar una palabra o texto por teclado y determinar
// si es o no una palabra palíndromo. (Palabra que se lee de igual
// manera de adelante hacia atrás, que de atrás hacia delante)
import java.util.Scanner;
public class main4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce una palabra: ");
        String palabra = sc.next();
        int left = 0, right = palabra.length()-1;
        boolean pal = true;
        do {
            if (palabra.charAt(right) != palabra.charAt(left)) pal = false;
            right--;
            left++;
        } while (right >= 0 && pal == true);
        if (pal) System.out.println("La palabra " + palabra + " es palíndroma.");
        else System.out.println("La palabra " + palabra + " no es palíndroma.");
    }
}
