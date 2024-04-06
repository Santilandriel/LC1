#include <stdio.h>
#include <stdlib.h>

//Crear una función llamada “signo”, que reciba un número real, y devuelva un número
//entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.

float signo(float numero);

int main()
{
  float num;
  int numint;
  printf("Ingrese numero real\n");
  scanf("%f", &num);
  
  numint = signo(num);

  printf("%d\n", numint);

  return 0;
}

float signo(float numero)
{
  int resultado;

  if (numero > 0)
  {
    resultado=1;
  }
  else if (numero < 0)
  {
    resultado=-1;
  }
  else
  {
    resultado=0;
  }
  return resultado;
}