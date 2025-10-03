/*
 * Ejercicio que pide 10 números por telcado e imprime:
 * La media de los numeros
 * EL mayor de todos
 * El menor de todos
 */

import java.util.Scanner;
public class BucleFor {

	public static void main(String[] args) {
		double num = 0, sum = 0, media = 0, mayor = -2147483648, menor = 2147483647, limit = 10;
		Scanner scanner = new Scanner(System.in);
		System.out.println("Introduce 10 numeros: ");
		for(int temp = 0;temp < limit;temp++) {
			num = scanner.nextInt();
			sum += num;
			if(mayor < num) mayor = num;
			if(menor > num) menor = num;
		}
		media = sum / limit;
		System.out.println("Media: " + media + " Mayor: " + mayor + " Menor: " + menor);
	}

}
