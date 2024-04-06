#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int num1,num2,num3,suma;

    //printf("ingresar tres numeros:\n\n");
   // scanf("%d", &num1, &num2 , &num3);

    printf("Ingrese el primer valor entero:\n ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor entero:\n ");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor entero:\n ");
    scanf("%d", &num3);
    
    suma=num1 + num2 + num3;

    printf("El resultado es:%d\n",suma);

    system("pause");
    return 0;
}
