/*Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.*/

#include<stdlib.h>
#include<stdio.h>

void main()
{
  float numeros;
  int cant_num=0;
  printf("Ingrese numeros reales, 0 para terminar de ingresar\n");
  do
  {
    scanf("%f", &numeros);
    cant_num++;
  } while (numeros!=0);

  printf("La cantidad de numeros del conjunto es:%i\n", cant_num-1);
  system("pause");
}
 /*do
  {
    printf("Ingresar numeros reales\n");
    scanf("%f", &numeros);
    while (numeros==0)
    {
      printf("Numero igual a 0, ingrese\n");
      scanf ("%f",&numeros);
    }
    cant_num++;
    printf("Ingrese 1 si desea ingresar otro num o (0) para terminar\n");
    scanf("%d", &respuesta);
  } while (respuesta==1);
  printf("La cantidad de numeros del conjunto es:%2.i\n", cant_num);
  system("pause");*/
