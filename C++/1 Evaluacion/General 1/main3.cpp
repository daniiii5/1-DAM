//
// Created by Dani on 28/10/2025.
//
/*-
 *Pide por teclado 5 nombres, imprime solo el que tenga la mayor cantidad de dígitos
 */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
    int cantidad = 5;
    char palabra[100];
    char maxPalabra[100];
    printf("Introduce %d nombres, imprime solo el que tenga mayor cantidad de digitos: \n", cantidad);
    int i = 0;
    while (i <= cantidad) {
        scanf("%s", palabra);
        if (i == 0 || strlen(palabra) > strlen(maxPalabra)) {
            strcpy(maxPalabra, palabra);
        }
        i++;
    }
    printf("La palabra con mas digitos es %s", maxPalabra);
}