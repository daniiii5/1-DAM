#include <stdio.h>
#include <string.h>

int main() {
	char numero1[65535] = "a";
	char numero2[65535] = "aa";

	while (strlen(numero1) != strlen(numero2)) {
		printf("Los numeros no son de la misma longitud. Prueba de nuevo.\n");
		
		printf("Pon un numero: ");
		scanf("%s", &numero1);
	
		printf("Ahora pon otro con la misma longitud: ");
		scanf("%s", &numero2);
	}
	
	for (int i = 0; i < strlen(numero1); i++) {
		printf("%d ", (numero1[i] - '0') * (numero2[i] - '0'));
	}
}
