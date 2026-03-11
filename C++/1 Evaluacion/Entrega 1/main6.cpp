//
// Created by Dani on 10/10/2025.
//
/*
- Pide por teclado 2 números, muestra la suma de todos los dígitos
de los 2 números*/
#include<stdio.h>
int main(void)
{
    printf("Introduce dos numeros: ");
    int num1, num2, sum1, sum2;
    scanf("%i", &num1);
    scanf("%i", &num2);
    for (int temp = num1; temp > 0; temp/=10) sum1 += temp%10;
    for (int temp = num2; temp > 0; temp/=10) sum2 += temp%10;
    printf("La suma de los digitos de ambos numeros es %i", sum1 + sum2);
}