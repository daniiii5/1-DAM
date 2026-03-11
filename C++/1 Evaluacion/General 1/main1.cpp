/*- Programa que imprima por teclado un triangulo (No vale poner
 *el triangulo en el código, tiene que ser con estructuras repetitivas):
   *
  ***
 *****
********/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void){
    int size = 7;
    for (int i = 0; i<=size; i+=2) {
        for (int space = 0;space <= (size-i)/2; space++) printf("   ");
        for (int fill = 0;fill <= i; fill++) printf(" * ");
        printf("\n");
    }
}