/*Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/

#include <stdio.h>
#include <stdlib.h>//para usar el system

int main()
{
    double valorHora, tiempoTrabajado, sueldo ;

    //const int valorHora=800 //contante cuando quiero una variable q no se modifique.
    valorHora= 800;

    printf("ingresar el tiempo trabajado en horas:\n");
    scanf("%lf", &tiempoTrabajado);

    sueldo=valorHora*tiempoTrabajado;

    printf("su sueldo es: %.lf\n", sueldo);

    system("pause");
    return 0;
}