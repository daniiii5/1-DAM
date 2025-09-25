import java.util.Scanner;
public class Condicional {

	public static void main(String[] args) {
		
		//VARIABLES
		int edad;
		Scanner scanner = new Scanner(System.in);
		System.out.println("Introduzca su edad: ");
		edad = scanner.nextInt();
		
		if (edad >= 18) {
			System.out.println("Bienvenido a la discoteca!");
		} else {
			System.out.println("No tienes la edad minima para entrar a la discoteca");
		}
	}

}
