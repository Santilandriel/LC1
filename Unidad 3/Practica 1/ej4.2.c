#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("ingrese 3 numeros \n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("el numero ingresado %i es el mayor de los 3", num1);
        }
        else
        {
            printf("el numero ingresado %i es el mayor de los 3", num3);
        }
    }
    else if (num2 > num3)
    {

        printf("el numero ingresado %i es el mayor de los 3", num2);
    }
    else
    {

        printf("puede que dos o más numeros sean");
    }

    return 0;
}