/*Una persona realiza una compra de un “disco duro” de precio 100€, si
compra más de 5 unidades se le aplica un 5% de descuento, si las
unidades son 10 o más un 10% de descuento. (1 puntos)
Pedimos los datos por pantalla. (Cantidad)
Ejemplo Salida:

Número de discos: 12 Precio unidad: 100€
Descuento: 10% Importe descuento: 120€
Importe: 1.200€ Total a Pagar: 1080€*/

import java.util.Scanner;
public class main2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Introduce la cantidad de discos a comprar: ");
        int amount = input.nextInt();
        float disc_price = 100;
        float final_price = amount * disc_price;
        float discount = -1;

        if (amount < 10 && amount >= 5) discount= 0.95F;
        else if (amount >= 10) discount=0.90F;
        System.out.println("Número de discos: "+amount+" Precio unidad: "+disc_price+"€\n" +
                "Descuento: "+(100-discount*100)+"% Importe descuento: "+(final_price-(final_price*discount))+"€\n" +
                "Importe: "+final_price+"€ Total a Pagar: "+final_price*discount+"€*/");
    }
}
