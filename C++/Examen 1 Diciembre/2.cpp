/*
Crea un programa que pida al usuario dos números enteros. El programa debe validar que ambos números tengan la misma
cantidad de dígitos. Una vez validado, debe multiplicar el primer dígito del primer número por el primer dígito del
segundo, el segundo por el segundo, y así sucesivamente, mostrando los resultados de forma consecutiva.

Ejemplo de ejecución:
    Entrada: Número 1: 23, Número 2: 45
    Proceso: (2 * 4) y (3 * 5)
    Salida: 815 (Nota: El código imprime los resultados pegados).
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
	int num1 = 1;
	int num2 = 11;
	int num1length = 0;
	int num2length = 0;
	
	do {
		num1 = 1;
		num2 = 11;
		num1length = 0;
		num2length = 0;
		printf("Introduce dos numeros de la misma longitud.\n");
		printf("Numero 1: ");
		scanf("%i", &num1);
		printf("Numero 2: ");
		scanf("%i", &num2);
		
		// Guardar la longitud de ambos
		for (int temp = num1; temp > 0; temp/=10) num1length++;
		for (int temp = num2; temp > 0; temp/=10) num2length++;
		
	} while(num1length != num2length);
	
	int tenth = 1;
	for (int i = 1; i < num1length; i++) tenth*=10;
	for (;tenth > 0; tenth/=10) {
		printf("%i", (num1/tenth)*(num2/tenth));
		num1 = (num1/tenth)*tenth-num1;
		num2 = (num2/tenth)*tenth-num2;
	}
	return 0;
}
