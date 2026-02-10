/*
-Desarrolla la mecánica del juego de las "celdas adyacentes" con un tablero de dimensión elegible por el usuario.
Nota: El juego de las celdas adyacentes es básicamente un tablero de 2x2 con todo lleno de 0's. Se elige una posición para cambiar a 1, y las celdas adyacentes cambian su valor junto a la celda elegida. El objetivo es que el jugador deje todas las celdas a 1.*/


#include <stdio.h>
#include <cstdlib>

bool check_if_valid(int y, int x, int max_y, int max_x) {
    return (y > 0 && y < max_y && x > 0 && x < max_x && max_y > 0 && max_x > 0);
}

void change_values(int t[200][200], int y, int x, int sizex, int sizey) {
    // Cambia el valor de la celda elegida
    t[y][x] = t[y][x] == 0 ? t[y][x] = 1 : t[y][x] = 0; 

    // Cambia el valor de las celdas adyacentes
    if (check_if_valid(y - 1, x, sizey, sizex)) {
        t[y - 1][x] = t[y - 1][x] == 0 ? t[y - 1][x] = 1 : t[y - 1][x] = 0;
    }
    if (check_if_valid(y + 1, x, sizey, sizex)) {
        t[y + 1][x] = t[y + 1][x] == 0 ? t[y + 1][x] = 1 : t[y + 1][x] = 0;
    }
    if (check_if_valid(y, x - 1, sizey, sizex)) {
        t[y][x - 1] = t[y][x - 1] == 0 ? t[y][x - 1] = 1 : t[y][x - 1] = 0;
    }
    if (check_if_valid(y, x + 1, sizey, sizex)) {
        t[y][x + 1] = t[y][x + 1] == 0 ? t[y][x + 1] = 1 : t[y][x + 1] = 0;
    }

}

int ask_size(char coord) {
    int size;
    printf("Introduce (%c): ", coord);
    try
    {
        scanf("%d", &size);
    }
    catch(...)
    {
        system("cls");
        printf("Valor no valido.\n");
        size = -1;
    }
    
    return size;
}

void pintar(int t[200][200], int sizey, int sizex) {

    // Imprimir coordenadas en la cabecera del tablero
    printf("  ");
    for (int _ = 0; _ < sizex; _++) {
        printf("%d ", _);
    }
    printf("\n");


    // Imprimir el tablero con las coordenadas Y a la izquierda
    for (int i = 0; i < sizey; i++) {
        printf("%d ", i); // Imprime la coordenada Y al inicio de cada fila
        for (int j = 0; j < sizex; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int y = -1, x = -1, sizey = -1, sizex = -1;

    int tabla[200][200];

    // Bucle hasta obtener un valor valido para y y x (tamaño de la tabla)
    while (sizey == -1 || sizex == -1) {
            printf("Introduce las dimensiones de la tabla (y, x): \n");
            sizey = ask_size('y');
            sizex = ask_size('x');
            if (!check_if_valid(1, 1, sizey, sizex)) {
                printf("Dimensiones no valida.\n");
                sizey = -1;
                sizex = -1;
            }
    }

    // Bucle hasta obtener un valor valido para y y x (posiciones para la tabla)
    while (true) {
        while (y == -1 && x == -1) {
            
            printf("Introduce posicion (y, x): \n");
            y = ask_size('y');
            x = ask_size('x');
            if (!check_if_valid(y, x, sizey, sizex)) {
                printf("Posicion no valida.\n");
                y = -1;
                x = -1;
            }
        }
        if (check_if_valid(y, x, sizey, sizex)) {
            change_values(tabla, y, x, sizex, sizey);
            pintar(tabla, sizey, sizex);
        } else {
            system("cls"); // Limpia la consola (funciona en Windows, para otros sistemas operativos puede ser necesario usar "clear")
            printf("Posicion no valida.\n");
            getchar(); // Espera a que el usuario presione Enter
        }
        
        y = -1;
        x = -1;
    }

}