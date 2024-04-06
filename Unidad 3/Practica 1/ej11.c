/*- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.*/


#include <stdlib.h>
#include <stdio.h>

int main()
{
    float num1,num2;
    
    int opcion; //variable donde voy a guardar la opcion q eliga el ususrio .por eso en int(1,2,3,4,5) si fuera (a,s,d,) seria char

    printf("ingrese num 1\n");
    scanf("%f", &num1);

    printf("ingrese num 2\n");
    scanf("%f", &num2);

    printf(" 1. Informar su suma\n 2. Informar su resta\n 3. Informar su multiplicación\n 4. Informar su división\n 5. Salir\n");
    scanf("%i", &opcion);

    while (opcion<1 || opcion>5) {
        printf("Numero no valido, reingrese el numero:\n");
        scanf("%i", &opcion);
    }
    
    switch (opcion)
    {
    case 1:
        printf("sumar\n");//("la suma es:\n", num1 + num2);
        break;
    case 2:
        printf("restar\n");//("la reesta es:\n", num1 - num2);
    case 3:
        printf("multiplicacion\n");//("la multiplicacion:\n", num1*num2);
    case 4:
        printf("division\n");//("la division es:\n", num1/num2);
    case 5:
        return 0;
    default:
        printf("opcion invalida\n");
        break;
    }
    system("pause");
    return 0 ;
}