#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

void menu()
{
    system("cls");
    printf("--- AGENDA ELECTRONICA ---\n");
    printf("1. Introducir nuevo contacto\n");
    printf("2. Mostrar todos los contactos\n");
    printf("3. Buscar contacto\n");
    printf("4. Ordenar contactos alfabeticamente\n");
    printf("5. Eliminar contacto\n");
    printf("6. Eliminar duplicados\n");
    printf("7. Salir\n");
}

bool preguntarConfirmacion(char pregunta[])
{
    printf("%s\n", pregunta);
    printf("Deseas Continuar? (y, n)");
    char option;
    scanf("%c", &option);
    if (option == 'y')
        return true;
    return false;
}

int buscarContactoPorNombre(char nombres[50][50], char nombreAbuscar[50], int totalContactos)
{
    for (int i = 0; i < totalContactos; i++)
    {
        if (strcmp(nombres[i], nombreAbuscar) == 0)
            return i;
    }
    return -1;
}

void introducirContacto(char nombres[50][50], int numeros[50], int totalContactos)
{
    int existe = 0;
    char nombreTemp[50];

    printf("Introduce el nombre: ");
    scanf("%s", nombreTemp);

    if (buscarContactoPorNombre(nombres, nombreTemp, totalContactos) != -1)
    {
        bool continuar = preguntarConfirmacion("El numero de contacto que deseas añadir existe en la lista de contactos.");
        if (continuar)
        {
            strcpy(nombres[totalContactos], nombreTemp);
        }
    }
    else
    {
        strcpy(nombres[totalContactos], nombreTemp);
    }

    printf("Introduce el numero: ");
    scanf("%d", &numeros[totalContactos]);
}

int eliminarContacto(char nombres[50][50], int numeros[50], int totalContactos, char nombreBorrar[50])
{

    int posicion = buscarContactoPorNombre(nombres, nombreBorrar, totalContactos);

    if (posicion == -1)
    {
        return 0;
    }

    for (int i = posicion; i < totalContactos - 1; i++)
    {
        strcpy(nombres[i], nombres[i + 1]);
        numeros[i] = numeros[i + 1];
    }

    return 1;
}

void eliminarDuplicados(char nombres[50][50], int numeros[50], int *totalContactos)
{
    for (int i = 0; i < *totalContactos; i++)
    {
        for (int x = i + 1; x < *totalContactos; x++)
        {
            if (numeros[i] == numeros[x])
            {
                eliminarContacto(nombres, numeros, *totalContactos, nombres[x]);

                (*totalContactos)--;
                x--;
            }
        }
    }
}

void imprimirContactos(char nombres[50][50], int numeros[50], int totalContactos)
{
    printf("\n--- LISTA DE CONTACTOS ---\n");
    for (int i = 0; i < totalContactos; i++)
    {
        printf("Contacto %d: Nombre: %s | Numero: %d\n", i + 1, nombres[i], numeros[i]);
    }
    system("pause");
}

void ordenarAlfabeticamente(char nombres[50][50], int numeros[50], int totalContactos)
{
    char aux[50];
    int auxEntero;

    for (int i = 0; i < totalContactos; i++)
    {
        for (int x = 0; x < totalContactos - 1; x++)
        {
            if (strcmp(nombres[x], nombres[x + 1]) > 0)
            {

                strcpy(aux, nombres[x]);
                strcpy(nombres[x], nombres[x + 1]);
                strcpy(nombres[x + 1], aux);

                auxEntero = numeros[x];
                numeros[x] = numeros[x + 1];
                numeros[x + 1] = auxEntero;
            }
        }
    }
    printf("Contactos ordenados correctamente.\n");
    system("pause");
}

int main()
{
    char aux[50];
    char nombres[50][50];
    int numeros[50];
    int totalContactos = 0;
    int option = 0;
    int resultado;

    while (option != 8)
    {
        menu();

        option = getch();
        option = option - '0';

        switch (option)
        {
        case 1:
            introducirContacto(nombres, numeros, totalContactos);
            totalContactos++; // Nota: Esto asume que introducirContacto siempre añade uno (cuidado si cancelas)
            break;

        case 2:
            imprimirContactos(nombres, numeros, totalContactos);
            break;

        case 3:
            printf("Introduce el nombre a buscar: ");
            scanf("%s", aux);
            resultado = buscarContactoPorNombre(nombres, aux, totalContactos);
            if (resultado == -1)
                printf("No existe.\n");
            else
                printf("Encontrado: %s - %d\n", nombres[resultado], numeros[resultado]);
            system("pause");
            break;

        case 4:
            ordenarAlfabeticamente(nombres, numeros, totalContactos);
            break;

        case 5:
            printf("Introduce el nombre a eliminar: ");
            scanf("%s", aux);
            if (eliminarContacto(nombres, numeros, totalContactos, aux) == 1)
            {
                totalContactos--;
                printf("Eliminado.\n");
            }
            else
                printf("No encontrado.\n");
            system("pause");
            break;

        case 6:
            eliminarDuplicados(nombres, numeros, &totalContactos);
            break;
        case 7:
            printf("Saliendo...\n");
            break;
        }
    }
    return 0;
}