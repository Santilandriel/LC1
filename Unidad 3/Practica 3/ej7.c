#include<stdio.h>
#include<stdlib.h>

void main()
{
    int sumador=0;
    
    for ( int i = 1; i <=40 ; i++)
    {
       if (i % 2 != 0 )
       {
          sumador = sumador + i;
       }
    }
    printf("La suma de los primeros 20 nuemros impares es:%i\n", sumador);
}