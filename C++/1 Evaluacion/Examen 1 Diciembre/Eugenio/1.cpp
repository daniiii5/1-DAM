#include <stdio.h>
#include <string.h>

int main() {
	char palabra[65535];
	int suma = 0;
	
	printf("Pon una palabra: ");
	scanf("%s", &palabra);
	
	for (int i = 0; i < strlen(palabra); i++) {
		suma += palabra[i];
	}
	
	printf("%d", suma);
}
