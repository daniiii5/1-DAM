// 1.	Codifique un programa que permita cargar una oración por
// teclado, luego mostrar cada palabra ingresada en una línea distinta.
//2.	Por ejemplo si cargo:
//3.		La mañana está fría.
//4.	Debe aparecer:
//5.	La
//6.	mañana
//7.	está
//8.	fría.
import java.util.Scanner;
public class main7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce una frase: ");
        String frase = sc.nextLine();
        System.out.println(frase.replace(' ', '\n'));
        }
    }