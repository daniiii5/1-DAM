/*
Tenemos que pedir por teclado una palabra, luego sumamos el valor ASCII de todos sus caracteres para
luego mostrar la suma total de cada dígito del número resultante (2 puntos):
Ejemplo:
Hola => 72 + 111 + 108 + 97 => 388 => 19
*/

#include<string.h>
#include<conio.h>
#include<stdio.h>
int main(void) {
 	int sum = 0, output = 0;
 	printf("Introduce una palabra:");
 	char palabra[32];
 	scanf("%s", palabra);
 	for (int i = 0; i < strlen(palabra); i++) {
 		sum += palabra[i];
	}
	do {
		output+=sum%10;
		sum/=10;
	} while (sum > 0);
	printf("%i", output);
 	return 0;
 }
