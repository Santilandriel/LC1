#include<stdio.h>
#include<stdlib.h>

int main()
{
    float notas, promedioA, sumaNotas, sumaNotasA, promedioGeneral=0 ;
    sumaNotasA=0;
    //sumaNotas=0; NO SE PUEDE ESTO
    for (int i = 1; i <=2; i++)
    {
        promedioA=0;
        sumaNotas=0;
        for (int j = 1; j <=3; j++)
        {
            printf("Ingrese la nota %d \n", j);
            scanf("%f", &notas);

            sumaNotas = sumaNotas + notas;
        }
        promedioA = sumaNotas / 3;
        printf(" El promedio del alumno es: %2.f\n", promedioA);
        sumaNotasA= sumaNotasA + promedioA;
    }
    promedioGeneral= sumaNotasA/2;
    printf(" El promedio general es: %2.f\n", promedioGeneral);

    system("pause");
    return 0;
}