/*Realiza mediante el uso de bucles una de las siguientes figuras que se
muestran a continuación. NO PEDIMOS NADA POR TECLADO
(2 puntos)
- System.out.println(“ * “); - System.out.print(“ * “);
- Es decir, es el bucle el que tendrá que pintar el gráfico a base
de asteriscos.*/

public class main4 {
    public static void main(String[] args) {
        int base = 9;

        // For line in triangle
        for (int lne = 1; lne <= base;lne=lne+2) {
            for (int space = base/2-lne/2-1; space >= 0; space--) System.out.print(" ");
            for (int dot = lne; dot > 0; dot--) System.out.print("*");
            System.out.print("\n");
        }
        // For main rectangle
        for (int rec = 1; rec <= base/3; rec++) {
            int width = base/4;
            int space = base/2-width;

            for (int spaces = space; spaces >= 0; spaces--) System.out.print(" ");
            for (int dots = width; width >= 0; width--) System.out.print("*");
            System.out.print("\n");
        }
    }
}
