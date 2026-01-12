#include<stdio.h>
#include<conio.h>
#include<string.h>

double sum(double num1, double num2) {
    return num1 + num2;
}

double minus(double num1, double num2) {
    return num1 - num2;
}

double mult(double num1, double num2) {
    return num1 * num2;
}

double div(double num1, double num2) {
    if (num2 == 0) {
        return num1 / num2;
    } else {
        printf("No se puede dividir por 0");
        return 0;
    }
}

int main() {
    double num1 = 0;
    double num2 = 0;
    int opt = 0;
    double output = 0;
    while (opt != 5) {
        try {
            printf("Introduce una accion [1: sumar, 2: restart, 3: multiplicar, 4: dividir, 5: salir]:");
            while (opt < 1 || opt > 5) {
                scanf("%i", &opt);
            }
            printf("Introduce dos numero: ");
            scanf("%d", &num1);
            scanf("%d", &num2);
        } catch (...) {
            printf("Introduce un digito valido.");
            getch();
            num1 = 0;
            num2 = 0;
            opt = 0;
        }
        switch (opt) {
            case 1:
                output = sum(num1, num2);
                break;
            case 2:
                output = minus(num1, num2);
                break;
            case 3:
                output = mult(num1, num2);
                break;
            case 4:
                output = div(num1, num2);
                break;
            case 5:
                return 0;
        }
        printf("El resultado es %d\n", output);
    }
}


