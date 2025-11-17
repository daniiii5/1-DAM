INICIAR
    // Inicilizacion de variables
    CADENA[11] vocales = "aeiouAEIOU";
    LISTA[11] reemplazos = ["pa", "pe", "pi", "po", "pu", "PA", "PE", "PI", "PO", "PU"];
    CADENA[64] palabra;
    CADENA[256] salida;
    // Obtener la palabra
    PREGUNTAR("%s", palabra);
    // Itinerar cada letra de la palabra[]
    PARA (ENTERO i = 0; i < LONGITUD(palabra); i++)
        // Guardar en nueva variable para simpliciar el código
        CARACTER letra = palabra[i];
        // Añadir letra a salida
        STRCAT(salida, letra)
        // Itinerar cada vocal en vocales[]
        PARA (ENTERO v = 0; v < LONGITUD(vocales); v++)
            CARACTER vocal = vocales[v];
            SI (letra == vocal)   
                STRCAT(salida, reemplazos[v]);
                ROMPER;
    // Establecer el fin de la cadena
    STRCAT(salida, "\0")
    // Mostrar salida, cadena con las vocales concatenadas con sus correspondientes adiciones
    MOSTRAR("%s", salida);
FIN 0;
