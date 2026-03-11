// pedir 2 numeros, dividir e imprimir, si el segundo numero es mayor que al primero no hacemos el calculo

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Introduce el numero 1: ");
    scanf("%d", &num1);
    printf("Introduce el numero 2: ");
    scanf("%d", &num2);

    if (num2 > num1)
    {
        printf("El segundo numero es mayor que el primer, intente de nuevo.");
    }
    else
    {
        printf("La division resulta en %d", num1 / num2);
    }
}