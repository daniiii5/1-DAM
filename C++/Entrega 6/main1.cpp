#include <stdio.h>
#include <stdlib.h>

void analizarDigitos(int num, int conteo[10]) {
    num = abs(num);

    if (num == 0) {
        conteo[0]++;
        return;
    }

    while (num > 0) {
        int digito = num % 10;
        conteo[digito]++;
        num /= 10;
    }
}

void marcarPresencia(int num, int presentes[10]) {
    num = abs(num);
    if (num == 0) presentes[0] = 1;
    while (num > 0) {
        presentes[num % 10] = 1;
        num /= 10;
    }
}

int main() {
    int n1, n2;
    int opcion;

    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Digito que mas se repite (entre los dos numeros)\n");
        printf("2. Digitos que NO estan en ninguno de los 2 numeros\n");
        printf("3. Digitos que SI estan en alguno de los 2 numeros\n");
        printf("4. Digitos que estan en los 2 (interseccion)\n");
        printf("5. Suma de los digitos de los 2 numeros\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        int totalConteo[10] = {0};
        analizarDigitos(n1, totalConteo);
        analizarDigitos(n2, totalConteo);

        switch (opcion) {
            case 1: {
                int maxRep = -1;
                for (int i = 0; i < 10; i++) {
                    if (totalConteo[i] > maxRep) {
                        maxRep = totalConteo[i];
                    }
                }
                printf("El/Los digito(s) que mas se repite(n) (%d veces): ", maxRep);
                for (int i = 0; i < 10; i++) {
                    if (totalConteo[i] == maxRep && maxRep > 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            }

            case 2: {
                printf("Digitos ausentes en ambos numeros: ");
                for (int i = 0; i < 10; i++) {
                    if (totalConteo[i] == 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            }

            case 3: {
                printf("Digitos presentes en al menos uno: ");
                for (int i = 0; i < 10; i++) {
                    if (totalConteo[i] > 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            }

            case 4: {
                int enN1[10] = {0};
                int enN2[10] = {0};
                marcarPresencia(n1, enN1);
                marcarPresencia(n2, enN2);

                printf("Digitos compartidos por ambos numeros: ");
                int alguno = 0;
                for (int i = 0; i < 10; i++) {
                    if (enN1[i] && enN2[i]) {
                        printf("%d ", i);
                        alguno = 1;
                    }
                }
                if (!alguno) printf("(Ninguno)");
                printf("\n");
                break;
            }

            case 5: {
                int sumaTotal = 0;
                for (int i = 0; i < 10; i++) {
                    sumaTotal += (i * totalConteo[i]);
                }
                printf("La suma de todos los digitos es: %d\n", sumaTotal);
                break;
            }

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }

    } while (opcion != 6);

    return 0;
}