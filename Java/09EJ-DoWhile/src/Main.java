import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        /*
        * Programa que ingresa 3 notas por teclado
        * muestra a continuación un menú funcional con las siguientes opciones, utilizando solamente una varfiable nota.
        * 1. Mejor Nota
        * 2. Peor Nota
        * 3. Promedio
        * 4. Salir
        * */
        float nota, menor = 999999999, mayor = -999999999, promedio, suma = 0;
        int opcion, cantidad = 3;
        System.out.println("========== Calculador de nota ==========");
        System.out.println("Introduce " + cantidad + " notas a continuacion: ");
        Scanner scanner = new Scanner(System.in);
        for (int i = cantidad; i > 0; i--) {
            nota = scanner.nextFloat();
            if (mayor < nota) mayor = nota;
            if (menor > nota) menor = nota;
            suma += nota;
        }
        promedio = suma / cantidad;

        do {
            System.out.println("1. Mejor nota");
            System.out.println("2. Peor nota");
            System.out.println("3. Promedio");
            System.out.println("4. Salir");

            opcion = scanner.nextInt();

            if (opcion == 1) {
                System.out.println("La mejor nota es: " + mayor);
            } else if  (opcion == 2) {
                System.out.println("La peor nota es: " + menor);
            } else if (opcion == 3) {
                System.out.println("El promedio de notas es: " + promedio);
            }
        } while (opcion != 4);

        System.out.println("Hasta pronto!");
    }
}
