#include<stdlib.h>
#include<stdio.h>

int main()
{
   int numero, contador, numerofinal;
   contador = 0;
   numerofinal = 0;
   printf ("Ingrese diez números positivos mayores a 0\n");
   do
   {
    scanf ("%d", &numero);
    while (numero <= 0)
    {
        printf ("Numero erroneo, ingrese otro\n");
        scanf ("%d", &numero);
    }
    numerofinal = numerofinal + numero;

    contador = contador + 1;
   } while (contador < 10);
   
  printf ("La suma es:%d\n",numerofinal);

  system ("pause");
  return 0;

}