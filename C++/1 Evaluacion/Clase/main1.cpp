// Suma, rsta, division y multiplicacion de dos numeros

#include<stdio.h>

int main(){
    
    int num1;
    printf("Introduce la cantidad del numero1: ");
    scanf("%d", &num1);
    int num2;
    printf("Introduce la cantidad del numero2: ");
    scanf("%d", &num2);

    int suma = num1 + num2;
    int resta = num2 - num1;
    int div = num2 / num1;
    int mult = num1*num2;
    
    if(num1 > 5){
        printf("numero1 es mayor que 5");
    }

}