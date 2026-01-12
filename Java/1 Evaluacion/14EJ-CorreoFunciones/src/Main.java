import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

    }

    public void askparams() {
        Scanner input = new Scanner(System.in);
        System.out.print("\nIntroduce tu mail: ");
        String mail = input.next();
    }

    public String sendmail(String mail, String to, String CC, String CCO, String context) {


        return "Mensaje enviado";
    }

}
