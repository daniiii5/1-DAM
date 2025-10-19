// Programa que solicita un numero e imprime el mes del año correspondiente.
// Controlar mes no válido.
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        boolean valid = false;
        int num = 0;
        Scanner sc = new Scanner(System.in);
        while (valid==false){
            System.out.println("Introduce el numero de un mes del año.");
            num = sc.nextInt();
            if (num<=12) valid = true;
        }
        switch(num) {
            case 1:
                System.out.println("El mes es Enero.");
                break;
            case 2:
                System.out.println("El mes es Febrero.");
                break;
            case 3:
                System.out.println("El mes es Marzo.");
                break;
            case 4:
                System.out.println("El mes es Abril.");
                break;
            case 5:
                System.out.println("El mes es Mayo.");
                break;
            case 6:
                System.out.println("El mes es Junio.");
                break;
            case 7:
                System.out.println("El mes es Julio.");
                break;
            case 8:
                System.out.println("El mes es Agosto.");
                break;
            case 9:
                System.out.println("El mes es Septiembre.");
                break;
            case 10:
                System.out.println("El mes es Octubre.");
                break;
            case 11:
                System.out.println("El mes es Noviembre.");
                break;
            case 12:
                System.out.println("El mes es Diciembre.");
                break;
        }
        sc.close();
    }
}
