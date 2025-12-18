#include <stdio.h>
#include <string.h>

int main() {
	char palabra[65535];
	char letras[65535];
	
	int cantidades[65535] = {0};
	
	printf("Pon una palabra: ");
	scanf("%s", &palabra);
	
	printf("Ahora pon varias letras para ver cuantas veces estan en la palabra original: ");
	scanf("%s", &letras);
	
	for (int i = 0; i < strlen(palabra); i++) {
		for (int j = 0; j < strlen(letras); j++) {
			if (palabra[i] == letras[j]) {
				cantidades[j]++;
			}
		}
	}
	
	for (int i = 0; i < strlen(letras); i++) {
		printf("%c aparecen: %d\n", letras[i], cantidades[i]);
	}
}
