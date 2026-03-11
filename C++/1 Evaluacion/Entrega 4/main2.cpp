#include <stdio.h>
#include <string.h>

int main() {
    int NUM_PERSONAS = 10;

    char nombres[10][50];
    char telefonos[10][15];
    int i;
    int indice_mas_corto = 0;
    int longitud_mas_corta = 51;

    printf("Introduce 10 nombres y 10 numeros de telefono.\n");

    for (i = 0; i < NUM_PERSONAS; i++) {
        printf("\nPersona %d:\n", i + 1);
        printf("  Nombre: ");
        scanf("%49s", nombres[i]);
        printf("  Telefono: ");
        scanf("%14s", telefonos[i]);

        if (strlen(nombres[i]) < longitud_mas_corta) {
            longitud_mas_corta = strlen(nombres[i]);
            indice_mas_corto = i;
        }
    }

    printf("La persona con el nombre mas corto es (longitud %d):\n", longitud_mas_corta);
    printf("Nombre: %s\n", nombres[indice_mas_corto]);
    printf("Telefono: %s\n", telefonos[indice_mas_corto]);

    return 0;
}