//
// Created by daniel.quddus_alumno on 01/10/2025.
//

#include<stdio.h>

int main(void) {
    int num1, num2, final;
    char operacion;
    printf("Introduce el primer numero de la operación: ");
    scanf("%d", num1);
    printf("Introduce el operador de la operación: (+,-,*,/)");
    scanf("%c", operacion);
    printf("Introduce el segundo numero de la operación: ");
    scanf("%d", num2);

    if (operacion == "+") printf(num1 + num2);
    else if (operacion == "-") printf(num1 + num2);
    else if (operacion == "*") printf(num1 + num2);
    else if (operacion == "/") printf(num1 + num2);
    else printf("Selecciona un operando válido.");


}