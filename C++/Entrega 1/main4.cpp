#include <stdio.h>
//
// Created by Dani on 10/10/2025.
//
/*
- Pedir por teclado un número, mostrar por pantalla cual es
el digito que más se repite*/
int main(void)
{
    char numeros[10] = {0,0,0,0,0,0,0,0,0,0};
    int num, digit, max;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    for (int temp = num; temp > 0; temp/=10) numeros[digit]++;
    for (int i = 0; i<10; i++)
    {
        if (max > numeros[i]) max = i;
    }
    printf("El numero que mas se repite es el %i.", max);
}