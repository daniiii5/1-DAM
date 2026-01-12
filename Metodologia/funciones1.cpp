/*
-Función que devuelva el triple de un número
-Procedimiento que pinte por pantalla un nombre pasado por parámetro seguido de la expresión “buen amigo, mejor persona.”
-Función a la que le pases peso y altura y te devuelva el IMC (índice de masa corporal)
-Convierte en un procedimiento el problema de la pirámide de asteriscos (Pasa su altura por parámetro)
-Realiza tu propia función LONGITUD, que devuelva el número de caracteres de una cadena.
-Función que devuelva true o false, dependiendo de si el parámetro que le has pasado es una vocal o no lo es.
*/



#include <stdio.h>

// Triple
int triple(int n) {
    int res = n * 3;
    return res;
}

// Procedimiento nombre
void saludo(char nom[]) {
    printf("%s buen amigo, mejor persona.\n", nom);
}

// IMC
float sacarIMC(float p, float a) {
    float res;
    res = p / (a * a);
    return res;
}

// Piramide
void piramide(int n) {
    int f, c, e;
    for(f = 1; f <= n; f++) {
        for(e = 1; e <= n - f; e++) {
            printf(" ");
        }
        for(c = 1; c <= (2 * f - 1); c++) {
            printf("*");
        }
        printf("\n");
    }
}

int miLongitud(char pal[]) {
    int i = 0;
    while(pal[i] != '\0') {
        i++;
    }
    return i;
}

int es_vocal(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    return 0;
}

int main() {
    int opcion = 0;

    // Triple
    int n1;
    printf("Dime un numero para el triple: ");
    scanf("%d", &n1);
    printf("El triple es %d\n\n", triple(n1));

    // Saludo
    char nombre[30];
    printf("Dime tu nombre: ");
    scanf("%s", nombre);
    saludo(nombre);
    printf("\n");

    // IMC
    float kgs, mts;
    printf("Peso (kg): ");
    scanf("%f", &kgs);
    printf("Altura (m): ");
    scanf("%f", &mts);
    printf("IMC: %.2f\n\n", sacarIMC(kgs, mts));

    // Piramide
    int h;
    printf("Altura piramide: ");
    scanf("%d", &h);
    piramide(h);
    printf("\n");

    // Longitud
    printf("Tu nombre tiene %d letras.\n\n", miLongitud(nombre));

    char letra;
    printf("Dime una letra: ");
    scanf(" %c", &letra);

    if(es_vocal(letra) == 1) {
        printf("Es vocal.\n");
    } else {
        printf("No es vocal.\n");
    }

    return 0;
}