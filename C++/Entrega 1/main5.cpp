//
// Created by Dani on 10/10/2025.
//
/*
- Pedir por teclado un número, determinar si es capicúa*/
#include<stdio.h>
int main(void)
{
    int num, inv = 0;
    printf("Introduce un numero.");
    scanf("%i", &num);
    for (int temp = num; temp > 0; temp/=10) inv = inv * 10 + temp % 10;
    if (num == inv)
    {
        printf("El numero %i es capicua.", num);
    } else
    {
        printf("El numero %i no es capicua.", num);
    }
}