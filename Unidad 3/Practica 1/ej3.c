/*Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1;
    
    printf("ingresar el nro 1\n");
    scanf("%i", &num1);

    if (num1>0)
    {
        printf("El positivo es:%i\n",num1);
    }
    else
    {
        if (num1<0)
       {
        printf("Es negativo\n");
       }
        else
       {
        printf("Es nulo\n");
       }

    }
        
    system("pause");
    
   return 0;
}