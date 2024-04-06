#include<stdio.h>
#include<stdlib.h>

// Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

int main()
{
    int sumador=0;
    
    for ( int i = 1; i <=10 ; i++)
    {
       if (i % 2 != 0 )
       {
          sumador = sumador + i;
       }
        
    }
      printf("la suma numeros impares son:%d \n", sumador);
      system("pause");
      return 0;
}