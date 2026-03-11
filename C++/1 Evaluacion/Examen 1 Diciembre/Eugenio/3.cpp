#include <stdio.h>

int main() {
	int numero;
	int acumulador = 0;
	
	printf("Pon un numero de 6 o mas cifras: ");
	scanf("%d", &numero);
	
	while (numero >= 10) {
		for (int i = numero; i > 0; i /= 10) {
			acumulador += i % 10;
		}
	
		numero = acumulador;
		acumulador = 0;
	}
	
	printf("%d", numero);
}
