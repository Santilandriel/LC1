#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado1,lado2,perimetro,diagonal,aux,area;

    printf("ingresar un lado:\n");
    scanf("%lf", &lado1);

    printf("ingresar el otro lado:\n");
    scanf("%lf", &lado2);
    
    aux= pow(lado1 , 2) + pow(lado2 , 2);

    diagonal= sqrt(aux);

    perimetro= 2*lado1 + 2*lado2;

    area= (lado1*lado2)/2;

    printf("la diagonal principal es:%.lf\n", diagonal);

    printf("el perimetro es:%.lf\n", perimetro);

    printf("el area es:%.lf\n", area);
    
    system("pause");

    return 0 ;
}
