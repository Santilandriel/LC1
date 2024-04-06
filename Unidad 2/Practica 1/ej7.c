//round para redondeo
// librelia time.h para timepo

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

     double valorHora , tiempoTrabajo , sueldo;

     printf("ingrese el valor de la hora:\n");
     scanf("%lf", &valorHora);

     printf("ingrese tiempo trabajado en horas:\n");
     scanf("%lf", &tiempoTrabajo);

     sueldo= valorHora*tiempoTrabajo;

     printf("su sueldo es: %.lf\n", sueldo);

     system("pause");
     return 0 ;
}
