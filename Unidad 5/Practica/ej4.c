//Crear una función que reciba un número cualquiera y que devuelva como resultado
//la suma de sus dígitos

#include<stdio.h>
#include <stdlib.h>

int suma(int numero);

void main()
{
    int nazi, num;
    printf("iNGRESE UN NUMERO\n");
    scanf("%d", &num);

    nazi = suma(num);

    printf("%d", nazi);
}

int suma(int numero)
{
    int contador=0;

    while (numero > 0)
    {
        contador += numero % 10;
        numero = numero /10;
    }
    
    return contador;
}