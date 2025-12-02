#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int MAX_MOV_X = 10;
    int MAX_MOV_Y = 10;
    int pos_x = 1;
    int pos_y = 1;
    int tecla;

    system("cls");

    printf("Usa las flechas (o 'w', 'a', 's', 'd') para mover el '*' (Max 10x10).\n");
    printf("Presiona 'q' para salir.\n\n");

    for (int i = 0; i < pos_y; i++) {
        printf("\n");
    }
    for (int j = 0; j < pos_x; j++) {
        printf(" ");
    }
    printf("*");

    while ((tecla = getch()) != 'q') {
        if (tecla == 0 || tecla == 224) {
            getch();
        }

        switch (tecla) {
            case 'w':
            case 72:
                if (pos_y > 1) pos_y--;
                break;

            case 's':
            case 80:
                if (pos_y < MAX_MOV_Y) pos_y++;
                break;

            case 'a':
            case 75:
                if (pos_x > 1) pos_x--;
                break;

            case 'd':
            case 77:
                if (pos_x < MAX_MOV_X) pos_x++;
                break;
        }

        system("cls");

        printf("Usa las flechas (o 'w', 'a', 's', 'd') para mover el '*' (Max 10x10).\n");
        printf("Presiona 'q' para salir.\n\n");

        for (int i = 1; i < pos_y; i++) {
            printf("\n");
        }

        for (int j = 1; j < pos_x; j++) {
            printf(" ");
        }
        printf("*");
        fflush(stdout);
    }

    system("cls");
    printf("Saliendo del Ejercicio 4.\n");

    return 0;
}