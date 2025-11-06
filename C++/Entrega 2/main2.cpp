//
// Created by daniel.quddus_alumno on 20/10/2025.
//

#include<stdio.h>
#include<string.h>

int main(void) {
    // -Pide por teclado una palabra, convierte toda la palabra a mayúscula
    char palabra[256];
    printf("Introduce una palabra para convertir a mayusculas: ");
    scanf("%s", palabra);
    for (int i = 0; i<=strlen(palabra) && palabra[i] != 0;i++) {
        if (palabra[i] >= 97 && palabra[i] <= 122) palabra[i]-=32;
    }
    printf("%s", palabra);
}