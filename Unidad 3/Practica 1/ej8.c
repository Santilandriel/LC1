/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float saldo_cuenta,retiro,total;
    
    saldo_cuenta=10000;

    printf("Cuanto desea retirar\n");
    scanf("%f", &retiro);

    if (retiro<=saldo_cuenta)
    {
        total= saldo_cuenta-retiro;
    }
    else
    {
        printf("Ingreso mas de lo q tiene\n");
    }
    
    printf("Le quedan disponibles: %2.f\n",total );

    system("pause");

    return 0;


}
