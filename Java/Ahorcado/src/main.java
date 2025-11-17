import java.util.Random;
import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();
        int state = 6;
        String options = "|" +
                "esternocleidomastoideo|" +
                "oso|" +
                "hipopotomonstruoesquipedaliofobia|" +
                "pneuomonultramicroscopicsilicovolcanoconiosis|" +
                "alcantara|" +
                "imaginar|" +
                "polar|" +
                "instituto|";
        // Índice del primer separador
        int random_word = r.nextInt(8);
        int first = 0;
        for (int i = 0; i <= random_word; i++)
            first = options.indexOf("|", first) + 1;
        // Índice del segundo separador
        int second = options.indexOf("|", first + 1);
        // Substring de la segunda palabra
        String password = options.substring(first, second);

        String added = "";

        do {
            switch (state) {
            case 6:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                " / \\  |\n" +
                "      |\n" +
                "=========");
                break;
            case 5:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                " /    |\n" +
                "      |\n" +
                "=========");
                break;
            case 4:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
                break;
            case 3:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|   |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
                break;
            case 2:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                "  |   |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
                break;
            case 1:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
                break;
            case 0:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
                break;
        }

            // Romper el bucle si no quedan mas vidas, pero imprimir el muñeco
            if (state == 0) break;
            boolean completed = true;
            for (int word_char = 0; word_char < password.length() ; word_char++) {
                boolean inadded = false;
                for (int added_loop = 0; added_loop < added.length(); added_loop++)
                    if (password.charAt(word_char) == added.charAt(added_loop))
                        inadded = true;
                if (inadded)
                    System.out.print(password.charAt(word_char));
                else {
                    System.out.print("_");
                    completed = false;
                }
            }

            if (completed) {
                state = 101;
                break;
            }

            System.out.print("\nIntroduce una palabra:");
            String temp_char = sc.next();
            if (temp_char.length()<=1) {
                if (password.contains(temp_char))
                    added += temp_char;
                else {
                    System.out.println("-1 HP");
                    state--;
                }
            }
            else
                if (temp_char.equalsIgnoreCase(password))
                    state = 100;
                else
                    System.out.println("Debes introducir una sola letra.");

        } while (state >= 0 && state < 50);

        System.out.println(state);
        switch (state) {
            case 0:
                System.out.println("Has perdido!");
                break;
            case 100:
            case 101:
                System.out.println("Has adivinado la palabra con " + (state) + " vidas restantes!");
        }
    }
}
