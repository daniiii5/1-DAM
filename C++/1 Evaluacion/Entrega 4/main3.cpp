#include <stdio.h>
#include <string.h>

int main() {
    char nombres_agenda[10][50];
    char apellidos_agenda[10][50];
    char telefonos_agenda[10][15];

    int contador_usuarios = 0;
    int opcion;
    int i;
    int encontrado;
    char nombre_buscado[50];

    do {
        printf("1. Introducir usuario nuevo (Max 10)\n");
        printf("2. Mostrar los datos de un usuario (Buscar por nombre)\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            opcion = 0;
            while (getchar() != '\n');
        }

        switch (opcion) {
            case 1:
                if (contador_usuarios >= 10) {
                    printf("\nERROR: Agenda llena.\n");
                    break;
                }

                printf("--- Introducir Nuevo Usuario ---\n");
                printf("Nombre: ");
                scanf("%49s", nombres_agenda[contador_usuarios]);
                printf("Apellido: ");
                scanf("%49s", apellidos_agenda[contador_usuarios]);
                printf("Numero de Telefono: ");
                scanf("%14s", telefonos_agenda[contador_usuarios]);

                contador_usuarios++;
                printf("\nUsuario introducido correctamente.\n");
                printf("\nPresiona ENTER para continuar...\n");
                getchar();
                getchar();
                break;
            case 2:
                encontrado = 0;

                printf("Introduce el nombre del usuario a buscar: ");
                scanf("%49s", nombre_buscado);

                for (i = 0; i < contador_usuarios; i++) {
                    if (strcmp(nombres_agenda[i], nombre_buscado) == 0) {
                        printf("\n--- Usuario Encontrado ---\n");
                        printf("Nombre: %s\n", nombres_agenda[i]);
                        printf("Apellido: %s\n", apellidos_agenda[i]);
                        printf("Telefono: %s\n", telefonos_agenda[i]);
                        encontrado = 1;
                        break;
                    }
                }

                if (!encontrado) {
                    printf("\nERROR: Usuario con nombre '%s' no encontrado.\n", nombre_buscado);
                }

                printf("\nPresiona ENTER para continuar...\n");
                getchar();
                getchar();
                break;
            case 3:
                printf("\nSaliendo del Menu de Agenda...\n");
                break;
            default:
                printf("\nOpcion no valida. Presiona ENTER para reintentar...\n");
                getchar();
                getchar();
                break;
        }
    } while (opcion != 3);

    return 0;
}