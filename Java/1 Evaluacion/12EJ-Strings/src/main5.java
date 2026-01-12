// 1.	Realizar un programa que permita cargar una dirección
// de mail e implementar una función que verifique si el String
// tiene cargado el carácter @.
import java.util.Scanner;
public class main5 {
    public static void main(String[] args) {
        String mail = "";
        String ext = ".com.es.org";
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Introduce un mail valido: ");
            mail = sc.next();
        } while (
                !(mail.length() > mail.lastIndexOf('.')+1 &&
                mail.contains(".") &&
                ext.contains(mail.substring(mail.lastIndexOf('.'), mail.length())) &&
                mail.contains("@"))
        );
    }
}