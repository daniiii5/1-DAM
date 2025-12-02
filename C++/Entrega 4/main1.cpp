#include <stdio.h>
#include <string.h>

int main() {
    int NUM_NOMBRES = 10;

    char nombres[10][50];
    int i, j;

    printf("Introduce 10 nombres.\n");

    for (i = 0; i < NUM_NOMBRES; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%49s", nombres[i]);
    }

    for (i = 0; i < NUM_NOMBRES; i++) {
        printf("Vocales de '%s': ", nombres[i]);

        for (j = 0; nombres[i][j]; j++) {
            char c = nombres[i][j];

            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                printf("%c", c);
            }
        }
        printf("\n");
    }

    return 0;
}