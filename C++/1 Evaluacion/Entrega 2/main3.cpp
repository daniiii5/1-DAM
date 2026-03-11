//
// Created by daniel.quddus_alumno on 20/10/2025.
//
#include<string.h>
#include<stdio.h>

int main(void) {
    // - Pide por teclado una palabra, cuál es la letra que mas se repite.

    char palabra[256];
    char abc[256] = {0};
    printf("Introduce una palabra: ");
    scanf("%s", palabra);
    // Este suma la cantidad de letras al array abc en la posicion del codigo ascii de la letra
    for (int i = 0; palabra[i] != 0; i++) abc[palabra[i]]++;
    int maxChar = -1;
    // Esto calcula cuál es la posicion de la letra que más se repite
    for (int j = 0; j < 256;j++) if (abc[j] > abc[maxChar]) maxChar = j;
    printf("El caracter que mas se repite es el %c con numero en tabla ascii %d", maxChar, maxChar);
}
