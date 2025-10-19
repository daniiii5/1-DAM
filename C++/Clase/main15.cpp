//
// Created by daniel.quddus_alumno on 06/10/2025.
//
/*
 * Pedir por teclado una letra minuscula, si no es una letra valida, volvemos a solicitarla. Tenemos que mostrar la letra en mayuscula.
 */
#include<stdio.h>
int main() {
    char charVar;
    while (!charVar || charVar <= 97 && charVar >= 122) {
        printf("Introduce una letra: ");
        scanf("%c", &charVar);
    }
    charVar -= 32;
    printf("%c %d", charVar, charVar);
}