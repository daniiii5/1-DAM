#include <cstdio>
//
// Created by Dani on 10/10/2025.
//
// - Pedir por teclado la longitud de los 3 lados de un triángulo (adyacente, hipotenusa y opuesto), imprimir
//     por pantalla el seno, coseno y tangente
int main(void)
{
    float adyacente, hipotenusa, opuesto;
    float seno, coseno, tangente;
    printf("Introduce la hipotenusa del triangulo: ");
    scanf("%f", &hipotenusa);
    printf("\nIntroduce la adyacente (El segundo lado mas largo del triangulo: ");
    scanf("%f", &adyacente);
    printf("\nIntroduce el lado opuesto del triangulo (EL lado mas corto): ");
    scanf("%f", &opuesto);
    seno = opuesto/hipotenusa;
    coseno = adyacente/hipotenusa;
    tangente = seno/coseno;
    printf("Seno: %f\n", seno);
    printf("Coseno: %f\n", coseno);
    printf("Tangente: %f\n", tangente);
}