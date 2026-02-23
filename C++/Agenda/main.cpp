
#include <stdio.h>
#include <cstring>

struct contacto
{
    char nombre[50];
    char telefono[20];
};
struct contacto contactos[25565];

int contactos_length(struct contacto contactos[25565]);
void print_contactos(struct contacto contactos[25565]);
void print_contacto(struct contacto c);
struct contacto create_contacto(char nombre[50], char telefono[20]);

int main(void)
{
    print_contactos(contactos);
    return 0;
}

void menu()
{
    printf("--- AGENDA ELECTRONICA ---\n");
    printf("1. Introducir nuevo contacto\n");
    printf("2. Mostrar todos los contactos\n");
    printf("3. Buscar contacto\n");
    printf("4. Ordenar contactos alfabeticamente\n");
    printf("5. Eliminar contacto\n");
    printf("6. Eliminar duplicados\n");
    printf("7. Salir\n");
}

void print_contacto(struct contacto c)
{
    printf("Nombre: %s\n", c.nombre);
    printf("Telefono: %s\n", c.telefono);
}

void print_contactos(struct contacto contactos[25565])
{
    int length = contactos_length(contactos);
    for (int i = 0; i < length; i++)
    {
        print_contacto(contactos[i]);
    }
}

int contactos_length(struct contacto contactos[25565])
{
    int i = 0;
    while (true)
    {
        if (strcmp(contactos[i].nombre, "\0"))
            return i + 1;
        else
            i++;
    }
};

struct contacto create_contacto(char nombre[50], char telefono[20])
{
    struct contacto c;
    strcpy(c.nombre, nombre);
    strcpy(c.telefono, telefono);
    return c;
}

void add_contacto(struct contacto contactos[25565], struct contacto c)
{
    int length = contactos_length(contactos);
    contactos[length] = c;
}

struct contacto find_by_number(struct contacto contactos[25565], char telefono[20])
{
    int length = contactos_length(contactos);
    for (int i = 0; i < length; i++)
    {
        if (strcmp(contactos[i].telefono, telefono) == 0)
            return contactos[i];
    }
    return create_contacto("\0", "\0");
}

struct contacto find_by_name(struct contacto contactos[25565], char nombre[50])
{
    int length = contactos_length(contactos);
    for (int i = 0; i < length; i++)
    {
        if (strcmp(contactos[i].nombre, nombre) == 0)
            return contactos[i];
    }
    return create_contacto("\0", "\0");
}

void delete_dupes(struct contacto contactos[25565])
{
    int length = contactos_length(contactos);
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (strcmp(contactos[i].telefono, contactos[j].telefono) == 0)
            {
                for (int k = j; k < length - 1; k++)
                {
                    contactos[k] = contactos[k + 1];
                }
                j--;
            }
        }
    }
}