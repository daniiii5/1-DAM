//
// Created by daniel.quddus_alumno on 20/10/2025.
//

#include<stdio.h>
#include<string.h>
int main(void) {

    // -Pide por teclado 5 letras, cuales son vocales?
    int vocales = 0;
    printf("Introduce 5 letras: ");
    for (int i = 0; i < 5; i++) {
        char letra;
        scanf(" %c", &letra);
        if (letra >= 65 && letra <= 90) letra+=32;
        if (letra == 97 ||
            letra == 101 ||
            letra == 105 ||
            letra == 111 ||
            letra == 117
            ) vocales++;
    }
    printf("Has introducido %d vocales.", vocales);
}