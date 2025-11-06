//
// Created by Dani on 28/10/2025.
//
/*- Programa que simule el comportamiento de una calculadora utilizando un menú con las siguientes opciones:
   1. Sumar 2 números
   2. Restar 2 números
   3. Dividir 2 números
   4. Multiplicar 2 números
   5. Salir
Al seleccionar una opción pide los 2 números y realiza la operación, luego tiene
que volver al menú hasta que el usuario seleccione la opción 5.
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(void) {
    int opcion = 0;
    float num1, num2, resultado;

    do {
        printf("\n=== CALCULADORA SIMPLE ===\n");
        printf("1. Sumar 2 numeros\n");
        printf("2. Restar 2 numeros\n");
        printf("3. Dividir 2 numeros\n");
        printf("4. Multiplicar 2 numeros\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Introduce el primer numero: ");
                scanf("%f", &num1);
                printf("Introduce el segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Introduce el primer numero: ");
                scanf("%f", &num1);
                printf("Introduce el segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Introduce el primer numero: ");
                scanf("%f", &num1);
                printf("Introduce el segundo numero: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Error: No se puede dividir entre cero.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
            case 4:
                printf("Introduce el primer numero: ");
                scanf("%f", &num1);
                printf("Introduce el segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intentalo de nuevo.\n");
        }
        if (opcion != 5) {
            printf("\nPresiona cualquier tecla para continuar...");
            getch();
        }

    } while (opcion != 5);
}
