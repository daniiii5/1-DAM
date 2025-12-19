import java.util.Scanner;

public class ejer4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Introduce una frase: ");
        String phrase = input.nextLine();
        System.out.print("Introduce una vocal: ");
        String vowel = input.next();

        for (int i = 0; i < phrase.length(); i++) {
            String letter = String.valueOf(phrase.charAt(i));
            if (vowel.equalsIgnoreCase(letter)) System.out.print("*");
            else System.out.print(letter);
        }
    }
}
