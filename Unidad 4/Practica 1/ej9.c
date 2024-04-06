/*Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array. */


#include<stdlib.h>
#include<stdio.h>

int main()
{
    int array1[5];
    int array2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese numero %i\n", i+1);
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        array2[i]= array1[i]*2;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", array2[i]);
    }
    system("pause");
    return 0;
}