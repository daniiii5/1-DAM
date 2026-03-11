//
// Created by daniel.quddus_alumno on 19/01/2026.
//
/*
-Pide por teclado 2 números de más de 4 y menos de 7 dígitos, muestra por pantalla la suma de todos sus dígitos impares
*/



#include <stdio.h>
#include <conio.h>

// Función para sumar los dígitos impares
int sumaDigitosImpares(int n) {
    int suma = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        int digito = n % 10;
        if (digito % 2 != 0) {
            suma = suma + digito;
        }
        n = n / 10;
    }
    return suma;
}

int main(void) {
    int n1 = 0;
    int n2 = 0;
    int valido = 0;

    while (valido == 0) {
        printf("Introduce 2 numeros (entre 10000 y 999999): ");
        int leidos = scanf("%d %d", &n1, &n2);
        if (leidos != 2) {
            printf("Error: Has introducido letras o caracteres invalidos.\n");
            while(getchar() != '\n');
        }
        else if (n1 <= 9999 || n1 >= 1000000 || n2 <= 9999 || n2 >= 1000000) {
            printf("Error: Los numeros deben tener 5 o 6 digitos.\n");
        }
        else {
            valido = 1;
        }
    }

    printf("\nResultados:\n");
    printf("Suma impares de %d: %d\n", n1, sumaDigitosImpares(n1));
    printf("Suma impares de %d: %d\n", n2, sumaDigitosImpares(n2));

    printf("\nPresiona cualquier tecla para salir...");
    getch();
    return 0;
}