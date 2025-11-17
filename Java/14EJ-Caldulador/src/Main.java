import java.util.Scanner;

public class Main {
    private float oper1, oper2, result;
    private int op;

    public static void main(String[] args) {
        Main mical = new Main();
        mical.pedir_datos();
        if (mical.op == 1) {
            mical.result = mical.suma(mical.oper1, mical.oper2);
        } else if (mical.op == 2) {
            mical.result = mical.resta(mical.oper1, mical.oper2);
        } else if (mical.op == 3) {
            mical.result = mical.mult(mical.oper1, mical.oper2);
        } else if (mical.op == 4) {
            mical.result = mical.div(mical.oper1, mical.oper2);
        }
        System.out.println(mical.result);
    }

    public void pedir_datos() {
        Scanner input = new Scanner(System.in);
        System.out.println("Introduzca el operador 1: ");
        oper1 = input.nextFloat();
        System.out.println("Introduzca el operador 2: ");
        oper2 = input.nextFloat();
        System.out.println("Introduzca la operacion:" +
                "[1. Suma, 2. Resta, 3. Multiplicar, 4. Division]");
        op = input.nextInt();
    }

    public float suma(float num1, float num2) {
        return num1 + num2;
    }

    public float resta(float num1, float num2) {
        return num1 - num2;
    }

    public float mult(float num1, float num2) {
        return num1 * num2;
    }

    public float div(float num1, float num2) {
        return num1 / num2;
    }

}
