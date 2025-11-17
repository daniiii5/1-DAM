/*
Tenemos que desarrollar un software que pida por teclado una cadena a desencriptar con las siguientes
características (2 puntos):
- Tiene que pedir por teclado una cadena que va a estar compuestas por números y ‘.’, cada
número representa una letra donde el 1 es una ‘a’ y la 26 es la ‘z’, el número 0 representa un
espacio en blanco
- La letra ‘ñ’ no existe
- Todas las letras son en MINÚSCULA
- La primera letra tiene que imprimirse en mayúscula por pantalla
Ejemplo:
8.15.12.1 => Hola
*/

#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(void) {
	
	printf("Introduce un conjunto de numeros ascii separados por puntos para descifrarlo: ");
	char input[32];
	scanf("%s", input);
	
	int one = '1', cache, position = 0;
	
	char vow = 'a', con = 'A', output[32];
	
	for (int i = 0; i <= strlen(input); i++) {
		
		if (input[i] == '.' ||  strlen(input) == i) {
			
			if (i == 1) output[position] = cache+con-1;
			else if (cache == 0) output[position] = 32;
			else output[position] = cache+vow-1;
			
			position++;
			cache = 0;
		}
		
		if (input[i] != '.' && strlen(input) != i) {
			cache = cache*10+(input[i]+1-one);
		} 
	}
	printf("%s", output);
	return 0;
}

