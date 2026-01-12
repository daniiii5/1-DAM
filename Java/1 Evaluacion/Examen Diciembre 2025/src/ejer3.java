public class ejer3 {
    public static void main(String[] args) {
        int width = 5;
        int ly = -1;
        int ls = -1;
        // top and medium part
        for (int i = width; i > 0; i-=2) {
            ls++;
            ly=i;
            for (int s = 0; s < ls; s++) System.out.print("   ");
            for (int y = 0; y < ly; y++) System.out.print(" * ");
            System.out.print("\n");
        }
        // lower part, save previous step
        for (int i = ly + 2; i <= width; i+=2) {
            ls--;
            ly=i;
            for (int s = 0; s < ls; s++) System.out.print("   ");
            for (int y = 0; y < ly; y++) System.out.print(" * ");
            System.out.print("\n");
        }

    }
}
