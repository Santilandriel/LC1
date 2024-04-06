/*Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar.*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1;
    bool resultado;
    
    printf("ingresar un numero\n");
    scanf("%i", &num1);
    
    resultado = num1 % 2;
    
    if (resultado==0)
    {
        printf("Es par\n");
    }
    else
    {
        printf("Es impar\n");
    }
    
    system("pause");
    return 0;
   
}
