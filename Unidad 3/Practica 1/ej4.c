/*Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1 , num2, num3;

    printf("ingrese el primer nro\n");
    scanf("%i", &num1);

    printf("ingrese el segundo nro\n");
    scanf("%i", &num2);

    printf("ingrese el tercer nro\n");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("El mayor es:%i\n",num1);
    }
    else
    {
        if (num2>num3)
        {
            printf("El mayor es:%i\n", num2);
        }
        else
        {
            printf("El mayor es:%i\n", num3);
        }
        
    }
    
    system("pause");
    system("cls");
    return 0;
}