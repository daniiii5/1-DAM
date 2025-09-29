#include<stdio.h>
int main(){
    printf("Introduce tantos numeros como guste, cuando finalice, introduzca un 0: ");
    int numero;
    int suma = 0;
    int media = 0;
    int mayor = -1410065407;
    int menor = 1410065407;
    for(int i;numero != 0;i){
        scanf("%d", &numero);
        if(numero != 0){
            suma = suma + numero;
            media = (media+numero)/2;
            if(mayor < numero) mayor = numero;
            if(menor > numero) menor = numero;
        } else {
            printf("\nLa suma de todos los numeros es: %d", suma);
            printf("\nLa media de todos los numeros es: %d", media);
            printf("\nEl mayor de todos los numeros es: %d", mayor);
            printf("\nLa menor de todos los numeros es: %d", menor);
        }
    }
}