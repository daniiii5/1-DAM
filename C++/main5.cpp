// pide por teclado 4 numeros, muestra por pantalla solo el mayor y el menor
#include <stdio.h>
#include <iostream>
int main() {
    int temporal;
    int mayor = -1410065407;
    int menor = 1410065407;
    for (int i = 0; i < 4; i++) {
        printf("Introduce el numero %d: ", i+1);
        scanf("%d", temporal);
        if (temporal > mayor) mayor = temporal;
        if (temporal < menor) menor = temporal;
    }
    
    std::cout << "Mayor: " << mayor << std::endl;
    std::cout << "Menor: " << menor << std::endl;
    return 0;
}