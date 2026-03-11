/*
Desarrolla un programa que solicite un número entero de al menos 6 dígitos. El programa debe calcular la suma de sus
dígitos de forma iterativa: si el resultado de la suma tiene más de un dígito, debe volver a sumar sus dígitos hasta
obtener un único valor numérico (entre 0 y 9).

Ejemplo de ejecución:
    Entrada: 987654
    Proceso: 1. 9+8+7+6+5+4 = 39 2. 3+9 = 12 3. 1+2 = 3
    Salida: La suma de todos los numeros hasta un unico digito es de 3
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void) {
	int numlength;
	int num = 7364;
	do {
		numlength = 0;
		printf("Introduce un numero de 6 digitos o mas:");
		scanf("%i", &num);
		for (int temp = num; temp > 0; temp/=10) numlength++;
	} while(numlength < 6);
	
	int sum = 0;
	do {
		sum = 0;
		for (;num > 0;num/=10) sum+=num%10;
		num = sum;
	} while(sum>=10);
	printf("La suma de todos los numeros hasta un unico digito es de %i", sum);
	return 0;
}