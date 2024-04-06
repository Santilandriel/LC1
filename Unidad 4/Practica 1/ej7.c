/*Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio. */

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int cant_notas;
    int notas[cant_notas];//es float 
    int suma_notas=0;
    int promedio=0;

    printf("Ingrese la cantidad de notas\n");
    scanf("%i", &cant_notas);
    
    //float noats[cant_noats] ;

    for (int i = 0; i < cant_notas; i++)
    {
        printf("Ingrese nota %i\n",i+1);
        scanf("%d", &notas[i]);
        suma_notas=suma_notas+notas[i];
    }

    promedio=suma_notas/cant_notas;

    printf("La suma de las notas es:%d\n", suma_notas);
    printf("El promedio es:%d\n", promedio);

    system("pause");
    return 0;
}