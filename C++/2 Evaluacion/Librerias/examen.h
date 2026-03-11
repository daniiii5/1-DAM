#pragma once
#include <stdio.h>

// Pasamos el texto como un puntero a char (apunta a la primera letra)
inline void grita(char *phrase)
{
    // 'letra' es un puntero que empieza apuntando al mismo sitio que 'phrase'
    char *letra = phrase;

    // Mientras el valor (*letra) no sea el final del texto ('\0')
    while (*letra != '\0')
    {
        // Leemos el valor que hay en esa dirección
        if (*letra >= 'a' && *letra <= 'z')
        {
            // Cambiamos el valor directamente en la memoria
            *letra = *letra - ('a' - 'A');
        }

        // ¡Magia de punteros! Avanzamos a la siguiente dirección de memoria (siguiente letra)
        letra++;
    }
}