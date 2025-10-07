import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Introduzca la primera nota: ");
        float nota1 = scanner.nextFloat();
        System.out.println("Introduzca la segunda nota: ");
        float nota2 = scanner.nextFloat();
        System.out.println("Introduzca la tercera nota: ");
        float nota3 = scanner.nextFloat();
        float media = (nota1+nota2+nota3)/3;

        System.out.println("La media de las tres notas es: "+media);
        if (media > 4) {
            if (media > 8 && media < 11) {
                System.out.println(media + " Es un sobresaliente.");
            } else if (media > 6 && media < 11){
                System.out.println(media + " Es un notable.");
            } else if (media > 4 && media < 11){
                System.out.println(media + " Es un suficiente.");
            } else {
                System.out.println("Ha ocurrido un error, o las notas introducidas no son validas.");
            }
        }else {
            System.err.println(media + " Es isuficiente.");
        }
        scanner.close();
    }
}
