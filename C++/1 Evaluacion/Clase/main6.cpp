#include<stdio.h>
#include<iostream>

int main() {
    int numero;
    for (int i = 0; numero % 2 == 0; i++){
        printf("Introduzca un numero par: ");
        scanf("%d", &numero);
        if (numero % 2 == 0){
            std::cout << "El numero " << numero << " es par.\n";
        }
    }
}