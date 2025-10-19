//
// Created by daniel.quddus_alumno on 08/10/2025.
//
/*
- ✅ Imprimir los 1000 primeros números primo
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
    }
