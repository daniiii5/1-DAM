/* 
 * Programa que solicita numeros y los va sumando, hasta ingresar el numero 9999, (este no debe sumarlo)
 * imprimir por pantalla el numero e indicar si este es par o impar
*/
import java.util.Scanner;
public class Boolean {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int suma = 0;
		int num = 0;
		System.out.println("Introduce numeros, 9999 para terminar la ejecucion.");
		while(num != 9999) {
			suma += num;
			num = scanner.nextInt();
		}
		System.out.println("La suma de todos los numeros es " + suma);
		if (suma % 2 == 0) System.out.println("El numero es par");
		if (suma % 2 == 1) System.out.println("El numero es impar");
	}
}