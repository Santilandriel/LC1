#include <stdlib.h>
#include <stdio.h>

int main()
{

    float venta, descuento, total;

    printf("ingresar el valor de la venta\n");
    scanf("%f", &venta);

    while (venta<0)
    {
        printf("La venta es menor a 0, ingrese la siguiente venta\n");
        scanf("%f", &venta);
    }
    /*if (venta<0)
    {
        printf("La venta es menor a 0\n");
    }*/
     if (venta>=10000)
    {
        descuento= 0.15;
    }
    else
    {
        if (venta<10000)
        {
            descuento=0.10;
        }
        
    }
    total= venta - (venta*descuento);

    printf("El total es: %2.f\n", total);
    system("pause");
    return 0;
}
