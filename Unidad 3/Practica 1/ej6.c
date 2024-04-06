/*/Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota;

    printf("ingrese la nota\n");
    scanf("%f", &nota);

    if (nota<4 && nota<=10)
    {
        printf("Reprobado\n");
    }
    else
    {
        if (nota>=4 && nota<=6 && nota<=10)
        {
            printf("Regular\n");
        }
        else
        {
            printf("Promociono\n");
        }
        
    }
    system("pause");
    return 0 ;
}