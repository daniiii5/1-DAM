#include <cstring>
#include <stdio.h>
#include <stdlib.h> // <--- 1. NECESARIO para usar system()

// Tu función prepare se queda igual, está perfecta
void prepare(char t[8][8][255], int size) {
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            if ((x + y) % 2 == 0) {
                // Ojo: asegúrate que tu archivo .cpp está guardado con codificación UTF-8
                strcpy(t[y][x], "⬜"); 
            } else {
                strcpy(t[y][x], "⬛");
            }
            printf("%s ", t[y][x]);
        }
        printf("\n");
    }
}

int main(void) {
    system("chcp 65001 > nul"); 
    
    const int size = 8;
    char t[size][size][255];

    prepare(t, size);

    return 0;
}