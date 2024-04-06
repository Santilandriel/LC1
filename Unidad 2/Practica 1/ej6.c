#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double suma,producto,resta,num1,num2;

    printf("ingresar un numero:\n");
    scanf("%lf", &num1);
    
    printf("ingresar otro numero:\n");
    scanf("%lf", &num2);

    suma= num1+num2;

    producto=num1*num2;
    
    resta= num1-num2;

    printf("suma: %.lf\n",suma);
    printf("su producto: %.lf\n",producto);
    printf("la resta: %.lf\n", resta);

    system("pause");

    return 0;
}