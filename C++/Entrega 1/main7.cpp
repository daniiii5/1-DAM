//
// Created by Dani on 10/10/2025.
//
/*
- Pide por teclado un número, ese número es la cantidad de
veces que tienes que pedir números nuevos, al terminar muestra por pantalla
cual es el mayor y cual es el menor*/
#include<stdio.h>
int main(void)
{
    printf("Cuantos numeros quieres introducir: ");
    int repeat, max = -999999999, min = 999999999, num;
    scanf("%d", &repeat);
    printf("Introduce %i numeros: ", repeat);
    while (repeat > 0)
    {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
        repeat--;
    }
    printf("El numero mayor es %i.\nEl numero menor es %i.", max, min);
}
