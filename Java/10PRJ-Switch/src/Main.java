public class Main {
    public static void main(String[] args) {
        int nota = 5;
        switch (nota){
            case 5:
                System.out.println("Suficiente");
            case 4:
                System.out.println("Insuficiente");
            default:
                System.out.println("Nota no válida.");
        }
    }
}
