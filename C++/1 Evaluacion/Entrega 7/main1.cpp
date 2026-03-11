//
// Created by daniel.quddus_alumno on 19/01/2026.
//
/*
-Pedir por teclado 2 números, mostrar todos los números primos entre esos 2 números.
*/


#include <stdio.h>

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void primeBetween(int num1, int num2) {
    int start, end;

    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }

    printf("Primos entre %d y %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    //primeBetween(2, 10);
    primeBetween(10, 20);
    return 0;
}