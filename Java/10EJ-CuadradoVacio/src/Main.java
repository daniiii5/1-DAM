public class Main {
    public static void main(String[] args) {
        // Cuadrado vacío
        int limit = 9;
        for (int i = 1; i <= limit; i++) {
            for (int j = 1; j <= limit; j++) {
                if (i == 1 || i == limit || j == 1 || j == limit || j == i || j+i == limit+1) {
                    System.out.print("*  ");
                } else {
                    System.out.print("   ");
                }
            }
            System.out.print("\n");
        }
    }
}
