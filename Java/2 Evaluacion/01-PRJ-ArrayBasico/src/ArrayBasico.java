public class ArrayBasico {
    int[] numeros;

    //CONSTRUCTOR DE LA CLASE

    public ArrayBasico() {
        numeros = new int[10];
        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = 7;
        }
    }

    public void imprimir() {
        for (int i = 0; i < numeros.length; i++) {
            System.out.print(numeros[i] + "-");
        }
    }

    public static void main(String[] args) {
        ArrayBasico miprograma = new ArrayBasico();
        miprograma.imprimir();
    }
}