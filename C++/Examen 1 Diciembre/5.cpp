/*
Implementa un sistema de cifrado simple mediante un menú. El programa debe permitir encriptar o desencriptar una palabra utilizando una clave numérica k (entre 1 y 9). La lógica de cifrado consiste en:
	Si el valor ASCII del carácter es par, se le suma k.
	Si el valor ASCII del carácter es impar, se le resta k.

Ejemplo de ejecución:
	Opción: 1 (Encriptar)
	Entrada: Palabra: abc, Clave: 1

	Proceso: * 'a' (97, impar) -> 97 - 1 = 96 ('`')
		'b' (98, par) -> 98 + 1 = 99 ('c')
		'c' (99, impar) -> 99 - 1 = 98 ('b')
	Salida: La palabra encriptada es: cb`
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
	int opcion = -1;
	char p[128];
	char out[128];
	int k;
	do {
		
		printf("1. Encriptar cadena\n2. Desencriptar cadena\n3. Salir\n");
		scanf("%i", &opcion);
		
		switch(opcion) {
			case 1:
				printf("Introduce una palabra:");
				scanf("%s", p);
				do {
					k = 0;
					printf("Introduce un kero para encriptar entre el 1 y el 9: ");
					scanf("%i", &k);
				} while (k < 1 || k > 9);
				for (int i = 0; i < strlen(p); i++) {
					if (p[i] % 2 == 0) out[i] = p[i]+k;
					else if (p[i] % 2 != 0) out[i] = p[i]-k;
				}
				printf("La palabra encriptada es: %s\n", out);
				break;
			case 2:
				printf("Introduce una palabra:");
				scanf("%s", p);
				do {
					k = 0;
					printf("Introduce el kero para desencriptar: ");
					scanf("%i", &k);
				} while (k < 1 || k > 9);
				for (int i = 0; i < strlen(p); i++) {
					if (p[i] % 2 == 0) out[i] = p[i]+k;
					else if (p[i] % 2 != 0) out[i] = p[i]-k;
				}
				printf("La palabra desencriptada es: %s\n", out);
				break;
			case 3:
				printf("Hasta pronto!");
				break;
			default:
				printf("Introduce una opcion valida.\n");
				opcion = getch();
		}
		
	} while(opcion != 3);
	return 0;
}