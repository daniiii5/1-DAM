// pide por teclado 4 numeros, muestra por pantalla solo el mayor y el menor
#include <stdio.h>
#include <iostream>
int main() {
    int num1, num2, num3, num4;
    printf("Introduce 4 numeros: ");
    scanf("%d",num1);
    scanf("%d",num2);
    scanf("%d",num3);
    scanf("%d",num4);
    scanf("%d",num1);
    int mayor = num1;
    int menor = num1;
    if (num2 > mayor) mayor = num2;
    if (num2 < menor) menor = num2;
    if (num3 > mayor) mayor = num3;
    if (num3 < menor) menor = num3;
    if (num4 > mayor) mayor = num4;
    if (num4 < menor) menor = num4;
    printf("Mayor: %d", mayor);
    printf("Menor: %d", menor);
    return 0;
}