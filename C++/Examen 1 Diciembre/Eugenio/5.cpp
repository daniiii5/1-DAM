#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char cadena[65535];
	int k;
	int opcion = -1;
	
	while (opcion != 3) {
		printf("\nBienvenido al programa\n");
		printf("Que quieres hacer?\n\n");
		printf("1. Encriptar cadena\n");
		printf("2. Desencriptar cadena\n");
		printf("3. Salir\n\n");
		printf("Selecciona una opcion.\n");
		
		opcion = getch() - '0';
		
		switch (opcion) {
			case 1:
				printf("Pon la palabra a encriptar: ");
				scanf("%s", &cadena);
				
				printf("Ahora pon un numero aleatorio entre 1 y 9 (se considerara la llave): ");
				scanf("%d", &k);
				
				if (k < 1 || k > 9) {
					printf("Numero invalido. Prueba de nuevo con una opcion valida.");
					break;
				}
				
				for (int i = 0; i < strlen(cadena); i++) {
					if (i % 2 == 0) {
						cadena[i] += k;
					} else {
						cadena[i] -= k;
					}
				}
				
				printf("Cadena encriptada: %s", cadena);
				break;
			case 2:
				printf("Pon la palabra a desencriptar: ");
				scanf("%s", &cadena);
				
				printf("Ahora introduce la llave que has usado para encriptarlo (1 al 9): ");
				scanf("%d", &k);
				
				if (k < 1 || k > 9) {
					printf("Numero invalido. Prueba de nuevo con una opcion valida.");
					break;
				}
				
				for (int i = 0; i < strlen(cadena); i++) {
					if (i % 2 == 0) {
						cadena[i] -= k;
					} else {
						cadena[i] += k;
					}
				}
				
				printf("Cadena desencriptada: %s", cadena);
				break;
			case 3:
				printf("\n\nHasta luego\n");
				break;
			default:
				printf("Opcion invalida, prueba de nuevo");
				break;
		}
	}
}
