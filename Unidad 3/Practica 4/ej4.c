 /*Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int cant_alumnos, cant_parciales;
    float notas, promedio, suma_notas, total_notas=0, promedio_general=0;-
    printf("Ingresar la cantidad de alumnos\n");
    scanf("%i", &cant_alumnos);

    printf("Ingrese la cantidad de parciales\n");
    scanf("%i", &cant_parciales);

    for (int i = 1; i <= cant_alumnos; i++)
    {
        promedio=0;
        suma_notas=0;
        for (int j = 1; j <= cant_parciales; j++)
        {
            printf("Ingrese la nota %i del alumno %i \n",j,i );
            scanf("%f", &notas);
            while (notas<0 || notas>10)
            {
                printf("Ingrese nota valida\n");
                scanf("%f", &notas);
            }
            suma_notas=suma_notas+notas;
        }
        promedio=suma_notas/cant_parciales;
        printf("El promedio del alumno es:%2.f\n", promedio);
        total_notas=total_notas+promedio;
    }
    promedio_general=total_notas/cant_alumnos;
    printf("El promedio general es:%2.f\n", promedio_general);

    system("pause");
    return 0;
}


