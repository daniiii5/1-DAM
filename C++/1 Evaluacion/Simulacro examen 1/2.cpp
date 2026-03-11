/*
Programa que resuelva una ecuación de segundo grado 
(calcular la x pidiendo a, b y c) pidiendo los valores
necesarios por teclado (2 puntos):
*/

#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(void) {
	float a, b, c;
	printf("ax^2 + bx + c = 0 \n");
	printf("Introduce a, b y c para resolver la ecuacion de segundo grado \n");

	printf("A: ");
	scanf("%i", &a);
	printf("B: ");
	scanf("%i", &b);
	printf("C: ");
	scanf("%i", &c);
	
	float firstcalculation = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
	float secondcalculation = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
	
	printf("Los resultados son %f y %f\n", firstcalculation, secondcalculation);
	return 0;
}
