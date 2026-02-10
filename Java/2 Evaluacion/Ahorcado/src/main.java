import java.util.Random;
import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();

        String[] options = {
            "esternocleidomastoideo",
            "oso",
            "hipopotomonstruoesquipedaliofobia",
            "pneuomonultramicroscopicsilicovolcanoconiosis",
            "alcantara",
            "imaginar",
            "polar",
            "instituto",
        };

        String[] states = {
            "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
            "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
        };

        String password = options[r.nextInt(options.length)];
        String added = "";

        int state = 0;
        boolean ganado = false;

        do {
            System.out.println(states[state]);

            if (state == 6) break;

            boolean letrasFaltantes = false;
            for (int i = 0; i < password.length(); i++) {
                char letraSecreta = password.charAt(i);
                if (added.indexOf(letraSecreta) != -1) {
                    System.out.print(letraSecreta + " ");
                } else {
                    System.out.print("_ ");
                    letrasFaltantes = true;
                }
            }
            System.out.println();

            if (!letrasFaltantes) {
                ganado = true;
                break;
            }

            System.out.print("\nIntroduce una letra o la palabra: ");
            String input = sc.next().toLowerCase();

            if (input.length() == 1) {
                char letra = input.charAt(0);

                if (added.indexOf(letra) != -1) {
                     System.out.println("⚠️ Ya usaste esa letra.");
                } else {
                    added += letra;
                    if (password.indexOf(letra) == -1) {
                        System.out.println("❌ Fallo");
                        state++;
                    }
                }
            } else {
                if (input.equalsIgnoreCase(password)) {
                    ganado = true;
                    break;
                } else {
                    System.out.println("❌ Palabra incorrecta");
                    state++;
                }
            }

        } while (state <= 6 && !ganado);

        if (ganado) {
            System.out.println("\n🎉 ¡HAS GANADO! La palabra era: " + password);
        } else {
            System.out.println("\n💀 ¡HAS PERDIDO! La palabra era: " + password);
        }
    }
}