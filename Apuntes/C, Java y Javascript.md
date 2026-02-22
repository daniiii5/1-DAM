
# Guía de Supervivencia: C vs Java vs JavaScript
**Nivel: Grado Superior (Enfoque en C con librerías `stdio`, `string`, `conio`)**

Esta guía compara cómo hacer lo básico en los tres lenguajes, centrando la atención en C.

---

## 1. Variables y Tipos de Datos basicos

### ¿Qué tipos existen?
* **C:** Tienes que ser específico (`int`, `char`, `float`).
* **Java:** Igual que C, pero añade `String` (con mayúscula) y `boolean`.
* **JS:** No le importa el tipo, solo usas `let`.

| Concepto | C (Estricto) | Java (Estricto + Objetos) | JavaScript (Dinámico) |
| :--- | :--- | :--- | :--- |
| **Declarar** | `int edad = 20;` | `int edad = 20;` | `let edad = 20;` |
| **Decimales**| `float precio = 9.99;` | `double precio = 9.99;` | `let precio = 9.99;` |
| **Letra** | `char letra = 'A';` | `char letra = 'A';` | `let letra = 'A';` |
| **Texto** | `char nombre[20];` | `String nombre;` | `let nombre;` |

---

## 2. Arrays Unidimensionales (Vectores)

### Crear el array
* **C:** Defines el tamaño fijo al principio. No se puede cambiar después.
* **Java:** Usas `new` y el tamaño.
* **JS:** Corchetes vacíos y metes lo que quieras.

```c
// C
int numeros[5];          // Vacio con hueco para 5
int pares[] = {2, 4, 6}; // Relleno directo

```

```java
// Java
int[] numeros = new int[5];
int[] pares = {2, 4, 6};

```

```javascript
// JS
let numeros = [];
let pares = [2, 4, 6];

```

### Obtener y cambiar valores (Igual en todos)

```c
numeros[0] = 50;      // Guardar
int valor = numeros[0]; // Leer

```

---

## 3. Arrays Bidimensionales (Matrices)

Imagina una tabla de Excel (filas y columnas).

### C (Filas y Columnas fijas)

```c
int tabla[3][3]; // tabla de 3x3
tabla[0][0] = 1; // Fila 0, Columna 0

```

### Java (Array de Arrays)

```java
int[][] tabla = new int[3][3];
tabla[0][0] = 1;

```

### JavaScript (Array dentro de Array)

```javascript
let tabla = [
    [1, 2, 3],
    [4, 5, 6]
];
tabla[0][0] = 1;

```

---

## 4. Strings (Cadenas de Texto) - ¡CUIDADO!

Aquí es donde C es muy diferente. C no tiene "Strings", tiene "Arrays de caracteres que terminan en un byte nulo (`\0`)".

### Crear

* **C:** `char saludo[50];` (Reserva 50 huecos).
* **Java:** `String saludo = "Hola";`
* **JS:** `let saludo = "Hola";`

### Copiar (Asignar valor)

* **C:** **NO** puedes hacer `saludo = "Hola"` después de crearlo. Tienes que usar la librería `<string.h>`.
* Comando: `strcpy(destino, origen);`


* **Java/JS:** `saludo = "Mundo";` (Sin problemas).

### Comparar (Ver si son iguales)

* **C:** **NO** uses `==`. Usa `strcmp`. Devuelve 0 si son iguales.
* `if (strcmp(a, b) == 0)`


* **Java:** **NO** uses `==`. Usa `.equals()`.
* `if (a.equals(b))`


* **JS:** Usa triple igual.
* `if (a === b)`



---

## 5. Estructuras de Control (If / Do-While)

Son **idénticas** en sintaxis. Lo que aprendas en C te vale para los otros dos.

### IF / ELSE

```c
if (edad >= 18) {
    // codigo
} else if (edad > 10) {
    // codigo
} else {
    // codigo
}

```

### DO ... WHILE

```c
int i = 0;
do {
    // Esto se ejecuta al menos una vez seguro
    i++;
} while (i < 5);

```

---

## 6. Funciones y Paso de Arrays (Tu duda específica)

> **Pregunta:** Si una función necesita un array, ¿debes poner el tamaño? ¿Variable? ¿Corchetes vacíos?

### En C (La respuesta compleja)

En C, cuando pasas un array a una función, la función **NO SABE** cuánto mide el array. Solo recibe la dirección de memoria del primer elemento.

1. **Corchetes:** Sí, pones los corchetes vacíos `[]` en el argumento para indicar que es un array.
2. **Tamaño:** **SÍ**, es casi obligatorio pasar una segunda variable con el tamaño, porque dentro de la función no puedes calcularlo mágicamente.

```c
// Definición de la función
// Recibe el array (int miArray[]) y OBLIGATORIAMENTE el tamaño (int tam)
void imprimirArray(int miArray[], int tam) {
    int i;
    for(i = 0; i < tam; i++) {
        printf("%d ", miArray[i]);
    }
}

// En el main:
int misNumeros[5] = {10, 20, 30, 40, 50};
imprimirArray(misNumeros, 5); // Le paso el array y el 5 manualmente

```

### En Java y JavaScript (La respuesta fácil)

No necesitas pasar el tamaño. El array es un objeto inteligente y sabe cuánto mide él mismo.

* **Java:**
```java
void imprimirArray(int[] miArray) { // Solo el array
    // Usas miArray.length para saber el tamaño
}

```


* **JS:**
```javascript
function imprimirArray(miArray) { // Solo el nombre
    // Usas miArray.length
}

```



---

## 7. Ejemplo Completo en C (Tutorial Final)

Copia esto para probarlo. Incluye todo lo que pediste: `stdio`, `string`, `conio`, funciones con arrays y bucles.

```c
#include <stdio.h>
#include <string.h>
#include <conio.h> // Para getch() y colores básicos en consolas antiguas

// 1. FUNCION SIMPLE
// Devuelve un entero, recibe nada
int pedirNumero() {
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    return num;
}

// 2. FUNCION CON ARRAY (Tu duda)
// Recibe: el array de chars (string) vacio en corchetes
// No hace falta tamaño en strings porque acaban en '\0'
void saludarUsuario(char nombre[]) {
    printf("\n--- Bienvenido %s ---\n", nombre);
}

// 3. FUNCION CON ARRAY DE NUMEROS
// Aqui SI necesitamos pasar el tamaño 'tam'
void mostrarLista(int lista[], int tam) {
    int i;
    printf("Tus numeros son: ");
    for(i=0; i < tam; i++) {
        printf("[%d] ", lista[i]);
    }
    printf("\n");
}

int main() {
    // Variables
    char usuario[20];
    char clave[20];
    int numeros[3]; // Array de 3 huecos
    int i;

    // DO WHILE para login
    do {
        // Limpiar pantalla (funciona en algunos compiladores de conio)
        // clrscr(); 
        
        printf("Usuario: ");
        scanf("%s", usuario); // Sin & para strings
        
        printf("Clave (admin): ");
        scanf("%s", clave);

        // COMPARAR STRINGS
        if (strcmp(clave, "admin") != 0) {
            printf("Error. Intenta de nuevo.\n");
        }

    } while (strcmp(clave, "admin") != 0);

    // Llamamos a funcion pasando string
    saludarUsuario(usuario);

    // Rellenamos array
    printf("Vamos a rellenar 3 numeros.\n");
    for(i = 0; i < 3; i++) {
        numeros[i] = pedirNumero();
    }

    // Llamamos a funcion pasando array y su tamaño
    mostrarLista(numeros, 3);
    
    // COPIAR STRING
    char despedida[50];
    strcpy(despedida, "Gracias por usar el programa. Adios.");
    printf("\n%s", despedida);

    printf("\nPresiona una tecla...");
    getch(); // Pausa de conio.h
    return 0;
}

```