public class Main {

    public static void main(String[] args) {
        int limit = 100000;
        for(int j = 0; j < limit; j++) {
            int sum = 0;
            for (int i = j-1; i > 0; i--) if(j % i == 0) sum += i;
            if(j == sum) System.out.println("El numero " + j + " es perfecto.");
        }
    }
}