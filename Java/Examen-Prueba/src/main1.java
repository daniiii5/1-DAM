/*El siguiente programa no saluda según la hora del día, siguiendo las
siguientes premisas:
La hora siempre es entera (int), y es introducida por teclado.
Buenos días: desde las 7 hasta las 11 ambas inclusive
Buenas tardes: desde las 12 hasta las 19 ambas inclusive
Buenas Noches: desde las 20 hasta las 6 ambas inclusive
En caso de que el número introducido no se corresponda con un mes
manda un mensaje a la pantalla indicando que el número no es
correcto. (1 puntos)*/

import java.util.Scanner;
public class main1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int time = -1;
        do {
            System.out.println("Introduce la hora.");
            time = input.nextInt();
        } while (!(time >= 1 && time <= 12));

        if (time >= 7 && time <= 11) {
            System.out.println("Buenos días.");
        } else if (time >= 12 && time <= 19) {
            System.out.println("Buenos tardes.");
        } else if (time >= 20 || time <= 6) {
            System.out.println("Buenos noches.");
        }
    }
}
