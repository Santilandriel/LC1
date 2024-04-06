//Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char cadena[30];
    /*char cadena1[20];
    char cadena2[10];
    char cadena3[15];

    printf("texto 1\n");
    scanf("%s", cadena1[]);

    printf("texto 1\n");
    scanf("%s", cadena2[]);

    printf("texto 1\n");
    scanf("%s", cadena3[]);*/

    for (int i = 0; i < 3; i++)
    {
        printf("texto \n", i+1);
        scanf("%s", &cadena);
        printf("Logitud %d \n", strlen(cadena));
    }
    

}