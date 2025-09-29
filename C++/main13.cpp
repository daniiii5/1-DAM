/* Pide por teclado un numero, muestra por pantalla cuantos digitos tiene (sin funciones ni librerias no vistas en clase)*/
#include<stdio.h>
int main(){
    int num, digit, inverted;
    for (digit = 0;digit < 5;){
        digit = 0;
        printf("\nIntroduce un numero de minimo 5 digitos: ");
        scanf("%d", &num);
        //Esto tiene que devolver 5
        for(int temp = num; temp > 0; digit++, temp/=10){}
    }
    for (inverted = 0; num > 0; num /= 10){
        inverted = inverted*10 + num%10;
    }
    printf("\n%d", inverted);
}