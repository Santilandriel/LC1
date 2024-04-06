/*Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. */

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int array1[5];
    int array2[5];
    int array3[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese numero %i\n", i+1);
        scanf("%d", &array1[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Ingrese numero %i\n", j+6);
        scanf("%d", &array2[j]);
    }
    for (int k = 0; k < 10; k++)
    {
        if (k<5)
        {
            array3[k]=array1[k];
        }
        else
        {
            array3[k]=array2[k-5];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", array3[i]);
    }
    
    system("pause");
    return 0;   
}
