// Pedir por teclado un numwero, mostrar por pantalla tantos * como el valor del numero (cada * separado por espacios)
#include<stdio.h>
int main(void){
    int num;
    printf("Intrododuzca un numero: ");
    scanf("%d", &num);
    for (num = num; num > 0; num--){
        printf("* ");
    }
}