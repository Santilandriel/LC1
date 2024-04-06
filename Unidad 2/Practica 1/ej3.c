#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main ()
 {
    double lado1,lado2,lado3,Perimetro;

    printf("Ingrese el primer lado del triangulo:\n ");
    scanf("%lf", &lado1 );

    printf("Ingrese el segundo lado del triangulo:\n ");
    scanf("%lf", &lado2 );

    printf("Ingrese el tercer lado del triangulo:\n ");
    scanf("%lf", &lado3 );

    Perimetro = lado1 + lado2 + lado3;
 
    printf("El perimetro es: %.lf\n", Perimetro); //si %.2fl seria hasta dos decimales

    system("pause");

    return 0;
 }