#include <cstdio>
#include <cstdlib>

void pantalla() {
    system("cls");
}

int op(int n1, int n2) {
    int resultado;
    resultado = n1 + n2;
    printf("Resultado = %d\n", resultado);
}

int main(void) {
    int num1 = 9;
    int num2 = 2;

    int resultado = op(num1, num2);
    printf("Resultado = %d\n", resultado);
    return 0;
}
