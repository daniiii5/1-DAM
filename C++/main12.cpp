/* Pide por teclado un numero, muestra por pantalla cuantos digitos tiene (sin funciones ni librerias no vistas en clase)*/
#include<stdio.h>
int main(){
    printf("Introduce un numero: ");
    int num, digit;
    scanf("%d", &num);
    for(digit = 0; num > 0; digit++, num/=10){}
    printf("El numero tiene %i digitos.", digit);
}