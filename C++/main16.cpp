//
// Created by daniel.quddus_alumno on 06/10/2025.
//
/*
 * Pedir por teclado 10 letras, cuantas son mayusculas? cuantas minusculas? cuantas vocales?
 */
#include<stdio.h>
int main(void) {
    char charVar;
    int mayus = 0, minus = 0, vowels = 0;
    int aVowel = 0, eVowel = 0, iVowel = 0, oVowel = 0, uVowel = 0;
    printf("Introduce 10 letras: ");
    for (int i = 0;i < 10;i++) {
        scanf(" %c", &charVar);
        if (charVar >= 'a' && charVar <= 'z') minus++;
        if (charVar >= 'A' && charVar <= 'Z') {
            mayus++;
            charVar += 32;
        };
        if (charVar == 'a' ||
            charVar == 'e' ||
            charVar == 'i' ||
            charVar == 'o' ||
            charVar == 'u') vowels++;
        if (charVar == 'a') aVowel++;
        if (charVar == 'e') eVowel++;
        if (charVar == 'i') iVowel++;
        if (charVar == 'o') oVowel++;
        if (charVar == 'u') uVowel++;

    };
    printf("Introduciste %i mayusculas, %i minusculas, y %i vocales.\na=%i\ne=%i\ni=%i\no=%i\nu=%i", mayus, minus, vowels, aVowel, eVowel, iVowel, oVowel, uVowel);
}