/*nga los caracteres que se desean buscar. El programa debe recorrer la pa
Escribe un programa que reciba una palabra principal y, posteriormente, una segunda cadena que contelabra principal y contar cuántas veces aparece cada uno de los caracteres indicados en la segunda cadena, mostrando el desglose individual.

Ejemplo de ejecución:
    Entrada: Palabra: ferrocarril, Letras: ra
    Salida: * La letra r se repite 3 veces.
        La letra a se repite 1 veces.
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
	// Para pruebas
	char p1[64] = "programacion";
	char p2[64] = "am";
	int amount[64] = {0};
	int sum;
	printf("Introduce una palabra larga: ");
	scanf("%s", p1);
	printf("Letras para contar sus apariciones: ");
	scanf("%s", p2);
	for (int i = 0; i < strlen(p2); i++) {
		sum = 0;
		char letra = p2[i];
		for (int k = 0; k < strlen(p1); k++) if (p1[k] == letra) sum++;
		printf("\nLa letra %c se repite %i veces.", letra, sum);
	}
	return 0;
}