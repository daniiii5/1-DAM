//
// Created by daniel.quddus_alumno on 20/10/2025.
//
#include<stdio.h>
#include<string.h>
int main(void) {
    // -Pide por teclado una letra, inviértela (si es mayus a minus, si es minus a mayus).
    char palabra[256];
    printf("Introduce una palabra para invertirla: ");
    scanf("%s", palabra);
    for (int i = 0; i<=strlen(palabra) && palabra[i] != 0;i++) {
        printf("%d", palabra[i]);
        if (palabra[i] >= 97 && palabra[i] <= 122) palabra[i]-=32;
        else if (palabra[i] >= 65 && palabra[i] <= 90) palabra[i]+=32;
    }
    printf("%s", palabra);
}