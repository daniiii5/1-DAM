import java.util.Scanner;

public class ejer1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String season = null;
        String suggestion = null;

        do {
            System.out.print("Introduce un mes del año: ");
            String month = input.next();
            month = month.toLowerCase();
            switch (month) {
                case "diciembre":
                case "enero":
                case "febrero":
                    season = "Invierno";
                    suggestion = "Abrigo";
                    break;
                case "marzo":
                case "abril":
                case "mayo":
                    season = "Primavera";
                    suggestion = "Sudadera";
                    break;
                case "junio":
                case "julio":
                case "agosto":
                    season = "Verano";
                    suggestion = "Camiseta";
                    break;
                case "septiembre":
                case "octubre":
                case "noviembre":
                    season = "Otoño";
                    suggestion = "Chaqueta";
                    break;
                default:
                    System.out.println("Introduce un mes válido.");
            }

        } while (season == null);
        System.out.println("Estación " + season + ". Recomendación: " + suggestion + ".");
    }
}
