/*
Escribe un programa que solicite al usuario una palabra. El programa debe recorrer cada uno de los caracteres de la
cadena, obtener su valor numérico (según la tabla ASCII) y calcular la suma total de estos valores. Al final, muestra
la palabra y el resultado de la suma.

Ejemplo de ejecución:
    Entrada: Hola
    Proceso: 'H'(72) + 'o'(111) + 'l'(108) + 'a'(97)
    Salida: La suma de todos los caracteres da como resultado 388
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
	printf("Introduce una palabra: ");
	char palabra[64];
	int sum = 0;
	scanf("%s", palabra);
	printf("%s", palabra);
	for (int i = 0; i < strlen(palabra); i++) {
		sum += palabra[i];
	}
	printf("La suma de todos los caracteres da como resultado %i", sum);
	return 0;
}