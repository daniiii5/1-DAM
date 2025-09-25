// Pedir por teclado un numwero, mostrar por pantalla tantos * como el valor del numero (cada * separado por espacios)
#include<stdio.h>
int main(void){
    int num;
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    for (int i = 0; num > i; i++){
        for (int j = 0; num > j; j++){
            printf("* ");
        }
        printf("\n");
    }
}