/* Pide por teclado un numero, muestra por pantalla cuantos digitos tiene (sin funciones ni librerias no vistas en clase)*/
#include<stdio.h>
int main(void){
    int num, digit = 0, finalNum = 0;
    printf("\nIntroduce un numero: ");
    scanf("%d", &num);

    // Si el numero es negativo pasarlo a positivo
    if (num < 0) num*= -1;

    // Calcular los decimales
    for(int temp = num; temp > 0; digit++, temp/=10);

    // Si los decimanles son pares, quitar uno, porque sino, como empieza a contar desde la derecha, puede sumar los numeros en posiciones impares
    if (digit % 2 != 0) num/=10;

    // Bucle para obtener los numeros en las posiciones pares y sumarlos
    for (int temp = num; temp > 0; temp /= 100) finalNum += temp % 100 % 10;

    printf("La suma de los numeros en posiciones pares es %d.", finalNum);
}
