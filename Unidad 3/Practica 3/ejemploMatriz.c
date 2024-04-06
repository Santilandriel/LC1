#include <stdio.h>
#include <stdlib.h>

/*Ejemplo de matriz*/ //10x10

void main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {

            printf("%d,%d   ", i, j); //printf("@");
        }
        
        printf("\n");
    }

    system("pause");
}