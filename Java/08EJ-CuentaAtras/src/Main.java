import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        for(int i = num-1;i >= 0;i--) {
            System.out.print(i);
            if(i != 0) System.out.print("-");
        }
        scanner.close();
    }
}