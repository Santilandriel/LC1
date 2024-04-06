/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales.*/


#include <stdlib.h>
#include <stdio.h>
 
int main()
{
    int num1, num2;
    
    printf("ingresar el nro 1\n");
    scanf("%i", &num1);

    printf("ingresar el nro 2\n");
    scanf("%i", &num2);

    if (num1==num2)
    {
      printf("los numeros son iguales\n");
    }
    else if(num1>num2)
    {
      printf("El mayor es:%i\n", num1);
    }
    else
    {
      printf("el mayor es:%i\n", num2);
    }
    
    system("pause");
    return 0;
}
