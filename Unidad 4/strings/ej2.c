//Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char nombre1;
    char nombre2;

    printf("1\n");
    scanf("%s", nombre1);
    printf("2\n");
    scanf("%s", nombre2);

    int comparacion = strcmp(nombre1 , nombre2);

    if (comparacion == 0)
    {
        printf("es cero");
    }
      else if (comparacion < 0)
      {
        printf("el primero es:\n", nombre1);
      }
      else
      {
        printf("el primero es:\n", nombre2);
      }
      system("pause");
}