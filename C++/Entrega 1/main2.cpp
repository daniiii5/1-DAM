//
// Created by Dani on 10/10/2025.
//
// - Pedir por teclado un número, mostrar por pantalla el digito
//     mayor y el digito menor
#include<stdio.h>
int main(void)
{
    printf("\nIntroduce un numero para mostrar el digito mayor y menor: ");
    int num, digit;
    scanf("%d", &num);
    int maxDigit = -1410065407;
    int minDigit = 1410065407;
    for (int temp = num; temp > 0; temp/=10)
    {
        digit = temp % 10;
        if (digit > maxDigit) maxDigit = digit;
        if (digit < minDigit) minDigit = digit;
    }
    printf("El digito mayor es %i.", maxDigit);
    printf("\nEl digito menor es %i.", minDigit);
}
