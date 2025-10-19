#include<stdio.h>
#include<iostream>

int main(void){
    int numero;
    int mayor = -1410065407;
    int menor = 1410065407;
    for (int i = 0; numero != 0; i + 0){
        printf("Introduzca un numero: ");
        scanf("%d", &numero);
        int limite = 100;

        if (numero >= limite){
            std::cout << "El numero introducido es mayor o igual a " << limite << "\n";
            printf("El numero introducido es mayor o igual a %d\n", limite);
        }
        if (numero == 0) {
            printf("Has introducido %d numeros pares.\n", i);
            printf("El numero mayor es %d\n", mayor);
            printf("El numero menor es %d\n", menor);
        }
        
        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
        if (!(numero % 2)){
            i++;
        }
    }
}