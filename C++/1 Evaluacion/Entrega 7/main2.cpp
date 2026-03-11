//
// Created by daniel.quddus_alumno on 19/01/2026.
//
/*
-Pide por teclado 2 números, muestra en pantalla solo sus dígitos pares (usando scanf("%d", &numero1))
*/

#include <stdio.h>
#include <conio.h>

bool par(int n) {
    return n % 2 == 0;
}

int main(void) {
    int n1 = -1;
    int n2 = -1;
    while (n1 == -1 || n2 == -1) {
        printf("Introduce dos numeros: ");
        int scan1 = scanf("%i", &n1);
        int scan2 = scanf("%i", &n2);

        if (scan1 != 1 || scan2 != 1) {
            printf("Debes introducir un numero valido.\n");
            while(getchar() != '\n');
            n1 = -1;
            n2 = -1;
        }
    }

    int start, end;

    if (n1 < n2) {
        start = n1;
        end = n2;
    } else {
        start = n2;
        end = n1;
    }

    for (int i = start; i <= end; i++) {
        if (par(i)) printf("%i\n", i);
    }

    return 0;
}

