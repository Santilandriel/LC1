#include <stdio.h>
int main()
{
   int array[5];
   float acum = 0;
   for(int i = 0; i < 5; i++)
   {
    printf("Ingrese el valor %d:\n", i + 1);
    scanf("%i", &array[i]);
    acum += array[i];
   }
   printf("La suma de los elementos es: %2.f\n", acum);
   printf("El promedio es: %2.f", acum / 5);
   system("pause");
   return 0;
}
