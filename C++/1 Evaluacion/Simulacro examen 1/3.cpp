/*
Tenemos que desarrollar un programa que muestre un menú con las siguientes opciones (2 puntos):
- Convertir palabra de mayúscula a minúscula
- Convertir palabra de minúscula a mayúscula
- Contar vocales
- Contar consonantes
*/

#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(void) {
	
	int diff =  'a' - 'A';
	
	do {
		
		// Preguntar palabra
		char main[64];
		printf("\nIntroduce una palabra: ");
		scanf("%s", main);
		
		printf("\n\n========== MENU ==========\n");
		printf("1. Convertir palabra de mayuscula a minúscula\n");
		printf("2. Convertir palabra de minuscula a mayúscula\n");
		printf("3. Contar vocales\n");
		printf("4. Contar consonantes\n");
		printf("5. Salir\n");
		printf("Introduce una opcion: [1, 2, 3, 4, 5]: ");
		int option;
		scanf("%i", &option);
		if (option == 5) {
			break;
		}
		
		
		int vowels = 0, consonants = 0;
		switch (option) {
			case 1:
				for (int i = 0; i <= strlen(main); i++) {
					if (main[i] >= 'A' && main[i] <= 'Z') main[i] += diff;
				}
				printf("%s", main);
				continue;
			case 2:
				for (int i = 0; i <= strlen(main); i++) {
					if (main[i] >= 'a' && main[i] <= 'z') main[i] -= diff;
				}
				printf("%s", main);
				continue;
			case 3:
				// Pasar todo a minuscula
				for (int i = 0; i <= strlen(main); i++) {
					if (main[i] >= 'A' && main[i] <= 'Z') main[i] += diff;
				}
				for (int i = 0; i <= strlen(main); i++) {
					if (main[i] == 'a' ||
					main[i] == 'e' ||
					main[i] == 'i' ||
					main[i] == 'o' ||
					main[i] == 'u') vowels++;
				}
				printf("Hay %i vocales.", vowels);
				continue;
			case 4:
				// Pasar todo a minuscula
				for (int i = 0; i <= strlen(main); i++) {
					if (main[i] >= 'A' && main[i] <= 'Z') main[i] += diff;
				}
				for (int i = 0; i < strlen(main); i++) {
					if (main[i] != 'a' &&
					main[i] != 'e' &&
					main[i] != 'i' &&
					main[i] != 'o' &&
					main[i] != 'u') consonants++;
				}
				printf("Hay %i consonantes.", consonants);
				continue;
		}
		
	} while (true);
	return 0;
}
