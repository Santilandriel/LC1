//Lee por consola notas hasta que el usuario lo indique e informar su suma y promedio.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
  float nota;
  int respuesta;
  int suma_notas=0;
  int promedio=0;
  int cantidad_notas=0;
  do
  {
    printf("Ingrese nota\n");
    scanf("%f", &nota);
    suma_notas=suma_notas+nota;
    cantidad_notas=cantidad_notas+1;
    printf("Desea ingresar otra nota?0 para terminar\n");
    scanf("%i", &respuesta);
        
  } while (respuesta != 0 && respuesta==1);

  promedio=suma_notas/cantidad_notas;

  printf("La suma de las notas es %i con un promedio de %i\n",suma_notas,promedio);
    
  system("pause");
  return 0;
}