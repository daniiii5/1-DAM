//
// Created by Dani on 09/02/2026.
//
#include<stdio.h>

int recursivo(int n) {
    if (n == 0) return 0;
    return n + recursivo(n - 1);
}

int main(void) {
    printf("%d", recursivo(4));
}
