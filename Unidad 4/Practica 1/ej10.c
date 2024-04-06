/*Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal. */

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int array1[4][4];
    int suma=0;

    for(int i = 0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("ingrese un numero\n");
            scanf("%i", &array1[i][j]);
            system("cls");
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            {
                suma = suma + array1[j];
            }
            
        }      
    }
    printf("La suma es:%d\n", suma);

    system("pasue");
    return 0;
}