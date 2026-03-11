//
// Created by daniel.quddus_alumno on 20/10/2025.
//
#include<stdio.h>
#include<string.h>
int main(void) {
    /*
-Ejercicio de desencriptado :
Nuestro codigo secreto funciona de la siguiente forma:
    pedimos por teclado un numero con 8 digitos, cada 2 digitos representa una letra
     09122001   =>    09      12       20       01      =  i     l    s    a    => ilsa
pedimos por teclado el numero de la contraseña para desencriptarlo y mostrar el texto oculto
    */
    int code;
    // code = 9122001;
    printf("Introduce un numero de 7 u 8 digitos: ");
    scanf("%d", &code);
    int size = 8;
    char decrypted[4];
    for (int k = code, i =size/2; k > 0; k/=100, i--) decrypted[i] = k%100+96;
    for (int i = 0; i <= size/2;i++) printf("%c", decrypted[i]);
}
