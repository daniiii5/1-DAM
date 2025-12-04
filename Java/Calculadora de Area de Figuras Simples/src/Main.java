import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int opt = -1;
        double result, radius = -1, width = 0, height = 0;

        Scanner input = new Scanner(System.in);
        do {
            System.out.println("Calculadora de Area de Figuras\n" +
                "1. Circulo\n" +
                "2. Rectangulo\n" +
                "3. Triangulo\n");

            try {
                opt = input.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Debes introducir un numero entre el 1 y el 3");
            } finally {
                input.nextLine();
            }
            if (opt < 1 || opt > 3) {
                System.out.println("Debes introducir un numero entre el 1 y el 3");
            }


        } while (opt < 1 || opt > 3);
        do {
            switch(opt) {
            case 1:
                Sys
                try {tem.out.println("Introduce el radio en centimetros.");
                    width = input.nextDouble();
                    result = circle(width);
                    System.out.println("El area del circulo es de " + result);
                } catch (InputMismatchException e) {
                    System.out.println("Debes introducir un numero valido.");
                } finally {
                    input.nextLine();
                    continue;
                }
            case 2:
                System.out.println("Introduce el lado en centimetros.");
                try {
                    width = input.nextDouble();
                    result = square(width);
                    System.out.println("El area del cuadrado es de " + result);
                } catch (InputMismatchException e) {
                    System.out.println("Debes introducir un numero valido.");
                } finally {
                    input.nextLine();
                    continue;
                }

            case 3:

                try {
                    System.out.println("Introduce la base en centimetros.");
                    width = input.nextDouble();
                    System.out.println("Introduce la altura en centimetros.");
                    height = input.nextDouble();
                    result = triangle(width, height);
                    System.out.println("El area del triangulo es de " + result);
                } catch (InputMismatchException e) {
                    System.out.println("Debes introducir un numero valido.");
                } finally {
                    input.nextLine();
                    continue;
                }



            }
        } while (true);

    }


    public static double circle(double num1) {
        return Math.PI*num1*num1;
    }

    public static double square(double num1) {
        return num1*num1;
    }

    public static double triangle(double num1, double num2) {
        return (num1*num2)/2;
    }
}
