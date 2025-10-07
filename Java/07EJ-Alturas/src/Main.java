/*
 * Programa que solicita 3 alturas e imprime por pantalla la media de las tres alturas.
 * NO UTILIZAR UNA VARIABLE PARA CADA ALTURA
 * */
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        System.out.println("Introduce tres alturas en metros.");
        Scanner scanner = new Scanner(System.in);
        int i = 0;
        int limit = 3;
        double num = 0;
        double temp;
        while (i < limit) {
            i++;
            temp = scanner.nextDouble();
            num = num+temp;
        }
        num = num / limit;
        System.out.println("La media de las tres alturas es de " + num + " metros.");
        scanner.close();
    }

}
