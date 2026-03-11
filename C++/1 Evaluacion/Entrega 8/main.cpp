//
// Created by daniel.quddus_alumno on 02/02/2026.
//
/*Programa que muestre un menú con las siguientes opciones:
1. Introducir nuevo contacto (pide por teclado nombre y numero de teléfono)
2. Mostrar todos los contactos
3. Buscar contacto (buscamos por el nombre y nos muestra el teléfono)
4. Ordenar contactos por orden alfabético
5. Salir*/

#include <stdio.h>
#include <string.h>

void clean_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void add(int nums[], char names[][64], int *count, int new_num, char *new_name) {
    if (*count < 100) {
        nums[*count] = new_num;
        strcpy(names[*count], new_name);
        (*count)++;
    }
}

void show(int nums[], char names[][64], int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("%s: %d\n", names[i], nums[i]);
    }
}

void find(int nums[], char names[][64], int count, char search_name[]) {
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(names[i], search_name) == 0) {
            printf("%s: %d\n", names[i], nums[i]);
            return;
        }
    }
}

void sort(int nums[], char names[][64], int count) {
    int i, j, temp_num;
    char temp_name[64];

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp_name);

                temp_num = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp_num;
            }
        }
    }
}

int main(void) {
    int nums[100] = {1234, 3456, 6789};
    char names[100][64] = {"Juan", "Ana", "Pedro"};
    int count = sizeof(nums) / sizeof(nums[0]);
    int option = 0;

    int input_num;
    char input_name[64];

    while (option != 5) {
        printf("\n1. Nuevo contacto\n");
        printf("2. Mostrar todos\n");
        printf("3. Buscar contacto\n");
        printf("4. Ordenar\n");
        printf("5. Salir\n");
        printf("Opcion: ");

        if (scanf("%d", &option) != 1) {
            clean_buffer();
            continue;
        }
        clean_buffer();

        if (option == 1) {
            printf("Nombre: ");
            scanf("%63s", input_name);
            clean_buffer();
            printf("Numero: ");
            scanf("%d", &input_num);
            add(nums, names, &count, input_num, input_name);
        } else if (option == 2) {
            show(nums, names, count);
        } else if (option == 3) {
            printf("Nombre a buscar: ");
            scanf("%63s", input_name);
            find(nums, names, count, input_name);
        } else if (option == 4) {
            sort(nums, names, count);
        }
    }

    return 0;
}