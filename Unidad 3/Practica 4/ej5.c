/*Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.*/

#include<stdlib.h>
#include<stdio.h>

void main()
{
    int DNI = 38632584;
    float nota = 7;
    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    
    while (intentos<=3)
    {
        printf("Ingresar el DNI del alumno\n");
        scanf("%i", &dniIngresado);

        if (dniIngresado!=DNI)
        {
            printf("DNI no valido\n");
            printf("%i intento de 3\n", intentos);  
            intentos++;
        }
        else
        {
            if (dniIngresado=DNI)
            {
                ingresaCorrectamente=1;
                break;
            }
            
        }
    }
    if (ingresaCorrectamente)
    {
        printf("Contraseña correcta\n");
        printf("La nota del alumno es %2.f\n", nota);
    }
    
    system("pause");
}
    /*while (DNI != dniIngresado)
    {
        do
        {
            printf("Intentos:%d\n",intentos-1);
            printf("DNI erroneo,Ingrese denuevo\n");
            scanf("%i", &dniIngresado);
            intentos--;
        } while (intentos=1);
        if (intentos=1)
        {
            printf("Se llego al maximo de intentos permitidos\n");
        }
        
    }
    
    if (DNI = dniIngresado )
    {
        printf("La nota del alumno es:%2.f\n ", nota);
    }*/