#include <stdio.h>

int main()
{
    /*int num[6];

    num[0] = 5;
    num[1] = 8;
    num[5] = 12;

    int i = 5;

    //printf("En el indice %d esta almacenado el valor %d\n". i , num[i]);//o num[5];


    int numeros[] = {10,20,30,40};// NO HACE FALTA DESIGNAR EL TAMAÑO*/

    int edades[8];

    for (int i = 0; i <= 8-1; i++)// o i<8;
    {
        printf("Ingrese la edad %d\n", i+1);
        scanf("%d", &edades[i]);//mejor %d para no confundir
    }

    for (int i = 0; i < 8; i++)
    {
        printf("Indice:%d , valor:%d\n", i , edades[i]);
    }
    
    

    system("pause");
    return 0;
}