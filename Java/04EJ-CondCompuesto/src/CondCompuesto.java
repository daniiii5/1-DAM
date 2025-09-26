import java.util.Scanner;
public class CondCompuesto {
/**Realizar un programa que lea por teclado dos números, 
 * si el primero es mayor al segundo y y menor que 100, informar
 * su suma, en caso contrario informa numero no valido**/
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Introduce el primer numero: ");
		int num1 = scanner.nextInt();
		System.out.println("Introduce el segundo numero: ");
		int num2 = scanner.nextInt();
		if (num1>num2 && num1<100) {
			System.out.println("El resultado es: " + (num1 + num2));
		} else {
			System.out.println("Numero no valido.");
		}
		scanner.close();
	}
}
