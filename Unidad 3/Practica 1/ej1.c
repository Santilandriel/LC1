/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int num1, num2;

    printf("ingresar un numero:\n");
    scanf("%i", &num1);                      //o %d

    printf("ingresar otro numero:\n");
    scanf("%i", &num2);
    
    if (num1>num2)
    {
       printf("el mayor es:%i\n", num1);  //("el num %i es maoyr que %i \n", num1 , num2)
    }
    else if(num2>num1)
    {
        printf("el mayor es:%i\n", num2);
    }
    else
    {
      printf("son iguales\n");
    }
        
    system("pause");

}