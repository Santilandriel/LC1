/*- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf("ingresar un numero del 1 al 12\n");
    scanf("%d", &numero);
    while (numero<1 || numero>12)
    {
        printf("Ingresar los valores indicados\n");
        scanf("%d", &numero);
    }
    
    switch (numero)
    {
    case 1:
        printf("enero\n");
        break;
    case 2 :
        printf("febrero\n");
        break;
    case  3:
        printf("marzo\n");
        break;
    case  4:
        printf("abril\n");
        break;
    case  5:
        printf("mayo\n");
        break;
    case  6:
        printf("junio\n");
        break;
    case 7 :
        printf("julio\n");
        break;
    case 8 :
        printf("agosto\n");
        break;
    case  9:
        printf("septiembre\n");
        break;
    case  10:
        printf("octubre\n");
        break;
    case 11 :
        printf("noviembre\n");
        break;
    case 12 :
        printf("diciembre\n");
        break;
    default:
        printf("error\n");
        break;
    }
    system("pause");
    return 0;
}