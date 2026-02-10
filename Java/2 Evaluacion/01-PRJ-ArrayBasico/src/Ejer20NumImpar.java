/*
Genera un array con los números impares del 1 al 100
Cargalo en el contructor de la clase
Imprime los números en orden descendiente desde el método imprimir
 */

public class Ejer20NumImpar {
    int[] num;

    public Ejer20NumImpar() {
        num = new int[50];

        int i = 0;
        for(int f = 99; f > 0; f -= 2) {
            num[i] = f;
            i++;
        }
    }

    public void imprimir() {
        for (int i = 0; i < num.length; i++) {
            System.out.print(num[i] + "  ");
        }
    }

    public static void main(String[] args) {
        Ejer20NumImpar programa = new Ejer20NumImpar();
        programa.imprimir();
    }
}
