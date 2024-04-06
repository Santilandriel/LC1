/*Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa.

 Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float DNI, total;
    int opcion_pago, opcion_tarjeta, opcion_cuotas, tarjeta;

    //tarjeta="a";
    total = 4600;

    printf("Ingrese su DNI\n");
    scanf("%f", &DNI);

    while (DNI < 1000000 || DNI > 99999999){// alt+124 para |
        printf("DNI no valido, por favor introduscalo denuevo\n");
        scanf("%f", &DNI);
    }

    printf("Seleccione el medio de pago:\n 1-Efectivo\n 2-Tarjeta de credito\n");
    scanf("%i", &opcion_pago);

   if (opcion_pago == 2)
    {
        printf(" Ingrese una opcion de las siguientes:\n 1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n");
        scanf("%i", &opcion_tarjeta);

        /*switch (opcion_tarjeta)
        {
        case 1:
            printf("Tarjeta = VISA\n");
            //opcion_tarjeta=1;
            //tarjeta= "VISA";
            break;
        case 2:
            printf("tarjeta = AMERICAN EXPRESS\n");
            //opcion_tarjeta=2;
            //tarjeta= "A E";
            break;
        case 3:
            printf("tarjeta = MERCADO PAGO\n");
            //opcion_tarjeta=3;
            //tarjeta= "MP";
            break;
        case 4:
            printf("tarjeta = CABAL\n");
            //opcion_tarjeta=4;
            //tarjeta= "CABAL";
            break;
        default:
            printf("opcion no valida\n");
            return 0;
            break;
        }*/

        printf("Ingrese la cantidad de cuotas en las que abonara (1, 3, 6 o 12)\n");
        scanf("%d", &opcion_cuotas);
        switch (opcion_cuotas)
        {
        case 1:
            total = total;
            break;
        case 3:
            total = total + (total * 4 / 100);
            break;
        case 6:
            total = total + (total * 8 / 100);
            break;
        case 12:
            total = total + (total * 8 / 100);
            break;
        default:
            printf("opcion invalida\n");
            break;
        }
    }
    else
    {
        if (opcion_pago == 1)
        {
            total = total;
            opcion_cuotas=1;
        }
    }

    printf("El total es:%2.f\n", total);

    printf("Resumen de la operacion\n");
    printf("DNI:%2.f\n", DNI);
    if (opcion_tarjeta==1)
    {
        printf("Medio de pago: VISA\n");
    }
    else
    {
        if (opcion_tarjeta==2)
        {
            printf("Medio de pago: AMERICAN EXPRESS\n");
        }
        else
        {
            if (opcion_tarjeta==3)
            {
                printf("Medio de pago: MERCADO LIBRE\n");
            }
            else
            {
                if (opcion_tarjeta==4)
                {
                    printf("Medio de pago: CABAL\n");
                }
                
            }
            
        }
        
    }
    
    
    printf("Cuotas:%i\n", opcion_cuotas);
    printf("Total:%2.f\n", total);

    system("pause");
    return 0;
}