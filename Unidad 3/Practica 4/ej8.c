/*Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  char vendedor;
  float ventas;
  float suma_ventas;
  int respuesta;
  for (int i=1 ; i=5 ; i++)
  {  
    suma_ventas=0;
    do
    {
      printf("Importes de las ventas\n");
      scanf("%f", &ventas);
      suma_ventas=suma_ventas+ventas;
      printf("Ingresar otra venta?0 para terminar\n");
      scanf("%i", &respuesta);
    } while (respuesta != 0);

    suma_ventas=suma_ventas*0,025;
    
    printf("Su codigo es %i con una comision de %2.f\n",i,suma_ventas);
        
  }
    system("pause");
    return 0;
}