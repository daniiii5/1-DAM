/**
 * Ejercicio de captura dos valores enteros e imprime:
 * suma
 * resta
 * producto
 * división
 **/
public class Main {
    public static void main(String[] args) {
        int num1 = 19;
        int num2 = 4;

        int suma = num1 + num2;
        int resta = num1 - num2;
        int producto = num1 * num2;
        int division = num1 / num2;

        System.out.println("El resultado de la suma de " + num1 + " y " + num2 + " es " + suma);
        System.out.println("El resultado de la resta de " + num1 + " y " + num2 + " es " + resta);
        System.out.println("El resultado de la multiplicación de " + num1 + " y " + num2 + " es " + producto);
        System.out.println("El resultado de la división de " + num1 + " y " + num2 + " es " + division);
    }
}
