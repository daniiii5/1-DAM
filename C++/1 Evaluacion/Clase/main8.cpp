#include<stdio.h>
#include<iostream>

int main(void){
    int tempNum;
    for (int i;tempNum != 0; i){
        printf("Introduce un numero: ");
        scanf("%d", &tempNum);
        if (tempNum == 0){
            printf("La suma total de numeros excepto los multiplos de 3 y 4 es %d", i);
        }
        if (tempNum % 3 != 0 && tempNum % 4 != 0){
            i += tempNum;
        }
    }
}