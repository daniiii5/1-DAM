#include<stdio.h>
// sume 3 numeros preguntados, si la suma es mas de 25 mostramos por pantalla el resultado de la suma

int main(){
    int limite = 25;
    int num1;
    int num2;
    int num3;
    printf("Introduce el numero 1: ");
    scanf("%d", &num1);
    printf("Introduce el numero 2: ");
    scanf("%d", &num2);
    printf("Introduce el numero 3: ");
    scanf("%d", &num3);

    int suma = num1 + num2 + num3;
    if(suma > 25){
        printf("La suma entre %d, %d y %d es mayor que %d\nResultado: %d", num1, num2, num3, limite, suma);
    }
}
