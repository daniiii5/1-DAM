//
// Created by Dani on 28/10/2025.
//
/*- Pide por teclado un numero de 8 dígitos, cuantas veces se repite
 *cada digito (en la salida final cuando indiques cuantas veces se repite
 *cada digito no debe repetirse ningún digito)*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {
    char numero[20];
    int contador[10] = {0};
    int i;
    printf("Introduce un numero de 8 digitos: ");
    scanf("%s", numero);
    if (strlen(numero) != 8) {
        printf("Error: Debe tener exactamente 8 digitos.\n");
        return 0;
    }
    for (i = 0; i < 8; i++) {
        if (numero[i] >= '0' && numero[i] <= '9') {
            contador[numero[i] - '0']++;
        } else {
            printf("Error: Solo se permiten digitos (0-9).\n");
            return 0;
        }
    }
    printf("\nRepeticiones de cada digito:\n");
    for (i = 0; i < 10; i++) {
        if (contador[i] > 0) {
            printf("El digito %d se repite %d veces.\n", i, contador[i]);
        }
    }
    printf("\nPresiona cualquier tecla para salir...");
    getch();
        return 0;
}
