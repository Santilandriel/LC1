 /*Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero, factorial = 1;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    while (numero<1)
    {
        printf("ifnanf\n");
        scanf("%i", &numero);
    }
    for (int i = 1; i <= numero; i++) {
        factorial = i;
    }
    printf("El factorial de %d es %d\n", numero, factorial);
     
    system("pause");
    return 0 ;
}