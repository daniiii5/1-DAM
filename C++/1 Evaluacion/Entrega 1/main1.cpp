//
// Created by daniel.quddus_alumno on 20/10/2025.
//
// Imprimir los primeros numeros primos

#include<stdio.h>
int main(void) {
    // Que no se divida por el mismo
    // Que no se divida por 1
    int limit = 1000;
    for (int j = 0;j<=limit;j++) {
        // Devuelve si es primo o no
        int num = j;
        bool primo = true;
        for(auto i = num;i>0;i--) if (i > 1 && i != num && num % i == 0) primo = false;
        if (primo) printf("El numero %d es primo.\n", num);
        // if (!primo) printf("El numero %d no es primo.\n", num);
    }
}