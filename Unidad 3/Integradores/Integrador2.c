#include<stdlib.h>
#include<stdio.h>
int main()
{
  int cant_ventas, DNI, monto_venta;
  int opcion_pago ,opcion_tarjeta, opcion_cuotas;
  float total, suma_total;

  total=4600;
  suma_total=0;
  printf("Ingrese la cantidad de ventas\n");
  scanf("%i", &cant_ventas);

 for (int i = 1; i <= cant_ventas; i++)
  {
    printf("Ingrese el DNI del cliente\n", i);
    scanf("%i", &DNI);
        
    while (1000000>DNI || DNI>99999999)
    {
      printf("Ingrese DNI valido\n");
      scanf("%i", &DNI);
    }
    printf("Seleccione el medio de pago:\n 1-Efectivo\n 2-Tarjeta de credito\n");
    scanf("%i", &opcion_pago);
    switch (opcion_pago)
    {                                 
     case 1:
      break;
     case 2:
      break;
     default:
      printf("Opcion no valida\n");
      break;
    }
    if (opcion_pago == 2)
    {
      printf(" Ingrese una opcion de las siguientes:\n 1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n");
      scanf("%i", &opcion_tarjeta);
      switch (opcion_tarjeta)
      {
        case 1:
          printf("Tarjeta = VISA\n");          
          break;
        case 2:
          printf("tarjeta = AMERICAN EXPRESS\n");            
          break;
        case 3:
          printf("tarjeta = MERCADO PAGO\n");
          break;
        case 4:
          printf("tarjeta = CABAL\n");           
          break;
        default:
          printf("opcion no valida\n");          
          break;
      }
      printf("Ingrese la cantidad de cuotas en las que abonara (1, 3, 6 o 12)\n");
      scanf("%d", &opcion_cuotas);
      switch (opcion_cuotas)
      {
      case 1:
        total = total;
        break;
      case 3:
        total = total + (total * 4 / 100);
        break;
      case 6:
        total = total + (total * 8 / 100);
        break;
      case 12:
        total = total + (total * 8 / 100);
        break;
      default:
        printf("opcion invalida\n");
        break;
      }
    }
    else if (opcion_pago == 1)
    {   
      total = total;
      opcion_cuotas=1;  
    }
    printf("El total es:%2.f\n", total);

    printf("Resumen de la operacion\n");
    printf("DNI:%2.f\n", DNI);
    if (opcion_tarjeta==1)
    {
      printf("Medio de pago: VISA\n");
    }
    else
    {
      if (opcion_tarjeta==2)
      {
        printf("Medio de pago: AMERICAN EXPRESS\n");
      }
        else
        {
          if (opcion_tarjeta==3)
          {
            printf("Medio de pago: MERCADO LIBRE\n");
          }
          else
          {
            if (opcion_tarjeta==4)
            {
              printf("Medio de pago: CABAL\n");
            }
          }
        }
    }
    printf("Cuotas:%i\n", opcion_cuotas);
    printf("Total:%2.f\n",total);
    suma_total=suma_total+total;
  }

  printf("La suma total de las ventas es:%2.f \n", suma_total);
  
  system("pause");
  return 0;
}
    