/* Pide por teclado un numero, muestra por pantalla el numero invertido (sin funciones ni librerias no vistas en clase)*/
#include<stdio.h>
int main(){
    int num, inverted;
    // Se va dividiendo entre 10 hasta que sea 0, al ser un entero no tiene decimales
    for (int digit = 0;digit < 5;){
        digit = 0;
        printf("\nIntroduce un numero de minimo 5 digitos: ");
        scanf("%d", &num);
        //Esto tiene que devolver 5
        for(int temp = num; temp > 0; digit++, temp/=10){}
    }
    // Se va haciendo el producto de 10 para que de el ultimo numero, se va añadiendo a otra variable y la principal dividiendola entre 10.
    for (inverted = 0; num > 0; num /= 10){
        inverted = inverted*10 + num%10;
    }
    printf("\n%d", inverted);
}