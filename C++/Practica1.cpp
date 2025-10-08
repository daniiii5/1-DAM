//
// Created by daniel.quddus_alumno on 08/10/2025.
//
/*
- ✅ Imprimir los 1000 primeros números primos
- Pedir por teclado un número, mostrar por pantalla el digito
    mayor y el digito menor
- Pedir por teclado la longitud de los 3 lados de un triángulo (adyasente, hipotenusa y opuesto), imprimir
    por pantalla el seno, coseno y tangente
- Pedir por teclado un número, mostrar por pantalla cual es
    el digito que más se repite
- Pedir por teclado un número, determinar si es capicúa
- Pide por teclado 2 números, muestra la suma de todos los dígitos
    de los 2 números
- Pide por teclado un número, ese número es la cantidad de
    veces que tienes que pedir números nuevos, al terminar muestra por pantalla
    cual es el mayor y cual es el menor
*/
#include<stdio.h>
int main(void) {
    //Imprimir los primeros 1000 numeros primos
    for (int l = 0, limit = 1000; limit >= 0;l++) {
        bool primo = true;
        for (int i = l - 1; primo && i != 0; i--) {
            if (l % i == 0 && i != l && i != 1) primo = false;
        };
        if (primo) {
            printf("\nEl numero %i es primo", l);
            limit--;
        };
    }
    printf("Introduce un numero para mostrar el digito mayor y menor: ");
    int num;
    scanf("%d", &num);
}