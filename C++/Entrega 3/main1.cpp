//
// Created by daniel.quddus_alumno on 24/11/2025.
//
// 1. Pedir por teclado 10 nombres, mostrar solo las vocales de cada uno
// (mostramos las vocales DESPUES de haber pedido los 10 nombres)

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {
    // Usamos 'const' para definir los límites de manera clara.
    const int LIMIT_FILAS = 10;
    const int DIM_COLUMNAS = 128;

    // Declaración de la matriz y el buffer temporal usando las constantes 'const'
    char master[LIMIT_FILAS][DIM_COLUMNAS];
    char temp[DIM_COLUMNAS];

    printf("--- Introduce %d Palabras ---\n", LIMIT_FILAS);

    // Bucle de entrada: desde i = 0 hasta i < 10
    for (int i = 0; i < LIMIT_FILAS; i++) {
        // Pedir la palabra. Usamos i+1 para la interfaz de usuario.
        printf("Introduce una palabra para guardar en la posicion %i: ", i + 1);

        // Leemos la palabra. Usamos "127" como el límite de caracteres
        // para scanf (DIM_COLUMNAS - 1) para evitar desbordamiento.
        // Nota: El número 127 debe ser literal en la cadena de formato
        // de scanf si no usamos macros o constantes en tiempo de preprocesamiento.
        scanf("%127s", temp);

        // Copiamos la cadena de temp a master[i].
        strcpy(master[i], temp);

        getchar();
    }

    // Bucle de salida: desde i = 0 hasta i < 10
    printf("\n--- Palabras Almacenadas ---\n");
    for (int i = 0; i < LIMIT_FILAS; i++) {
        // Imprimir la cadena
        printf("Posicion %i: %s\n", i + 1, master[i]);
    }

    return 0;
}