import java.util.Scanner;
public class DatosUser {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		int resultado;
		int oper1;
		int oper2;
		
		//ALGORITMO
		System.out.println("Introduzca el valor del primer operando: ");
		oper1 = teclado.nextInt();
		System.out.println("Introduzca el valor del segundo operando: ");
		oper2 = teclado.nextInt();
		teclado.close();
		
		resultado = oper1+oper2;
		System.out.println("La suma de " + oper1 + " y " + oper2 + " da como resultado: " + resultado);

		teclado.close();
	}

}
