import java.util.Random;
import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();
        int state = 6;
        String options = "esternocleidomastoideo|oso|hipopotomonstrupesquipedaliofobia|pneuomonultramicroscopicsilicovolcanoconiosis";
        // Obtener una palabra
        int wordsCount = 0;
        // Contar palabras usando sus espacios
        for (char c : options.toCharArray()) if (c == '|') wordsCount++;
        // Añadir la última palabra, ya que no hay espacios ni al principio ni al final
        wordsCount++;
        System.out.println(r.nextInt(wordsCount));

        String password = options.substring(options.indexOf("|", options.indexOf("|") + r.nextInt(wordsCount)),
                options.indexOf("|", options.indexOf("|") + r.nextInt(wordsCount)) + 1);
        System.out.println(password);




        String added = "";
        System.out.println();

        do {


        } while (state < 6);

        switch (state) {
            case 0:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                " / \\  |\n" +
                "      |\n" +
                "=========");
            case 1:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                " /    |\n" +
                "      |\n" +
                "=========");
            case 2:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|\\  |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
            case 3:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                " /|   |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
            case 4:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                "  |   |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
            case 5:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "  O   |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
            case 6:
                System.out.println("  +---+\n" +
                "  |   |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "      |\n" +
                "=========");
        }



    }
}
