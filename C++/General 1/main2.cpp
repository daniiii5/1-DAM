//
// Created by daniel.quddus_alumno on 27/10/2025.
//
/*- Pedir por teclado una cadena de 10 caracteres o más
 *(máximo 20), imprime en pantalla SOLO las vocales de esa cadena*/


#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
    int size = 20;
    char phrase[size];
    scanf("%s", phrase);
    for (int i = 0; i <= strlen(phrase); i++) {
        if (phrase[i] == 'a'||
            phrase[i] == 'e'||
            phrase[i] == 'i'||
            phrase[i] == 'o'||
            phrase[i] == 'u') printf("%c", phrase[i]);
    }

}