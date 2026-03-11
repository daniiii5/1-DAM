/*
1. Pedir por teclado una palabra, tenemos que mostrar por pantalla la suma del valor ASCII de todas sus
vocales (2 puntos):
Ejemplo:
Campana => 291
*/

#include<string.h>
#include<conio.h>
#include<stdio.h>
int main(void) {
 	int sum = 0;
 	printf("Introduce una palabra:");
 	char palabra[32];
 	scanf("%s", palabra);
 	for (int i = 0; i < strlen(palabra); i++) {
 		sum += palabra[i];
	}
 	printf("La suma de los codigos ascii de cada letra es de %i", sum);
 	return 0;
 }
