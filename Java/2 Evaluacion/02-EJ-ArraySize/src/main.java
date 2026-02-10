// Crea un array de tamaño aleatorio de maximo 50, y
// cárgalo con número entre 100 y 200 incluidos.

public class main {

    private int random(int min, int max) {
        return (int) (Math.random() * (max - min) + 1) + min;
    }

    private void imprimirNum(int s) {
        System.out.println(s);
    }

    public static void main(String[] args) {
        main Main = new main();
        int arrayMaxSize = 50;
        int minValueInt = 100;
        int maxValueInt = 200;

        int[] l = new int[arrayMaxSize];

        for (int i = 0; i < arrayMaxSize; i++) {
            int random = Main.random(minValueInt, maxValueInt);
            l[i] = random;
            Main.imprimirNum(random);
        }
    }
}
