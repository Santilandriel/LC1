/* Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{ 
    char nombres[100][200], apellidos[100][200];

    for (int i = 0; i < 1; i++)
    {
        printf("Ingrese el nombre %d:\n", i+1);
        scanf("%s", &nombres[i]);
        printf("Ingrese el nombre %d:\n", i+1);
        scanf("%s", &apellidos[i]);
    }

    printf("Estos son los nombres cargados:\n");
    for (int i = 0; i < 1; i++)
    {
        printf("%s\n", nombres[i]);
    }

    printf("Estos son los apellidos cargados:\n");
    for (int i = 0; i < 1; i++)
    {
        printf("%s\n", apellidos[i]);
    }

    printf("Concatenamos..\n");
    
    for (int i = 0; i < 1; i++)
    {
        strcat(nombres[i], apellidos[i]); // APLICAMOS LA FUNCION strcat(array1, array2). El resultado queda en el array1
    }

    printf("Y mostramos el resultado:\n");
    for (int i = 0; i < 1; i++)
    {
        printf("%s\n", nombres[i]);
    }
    
    system("pause");
}