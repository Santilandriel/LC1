#include <stdio.h>
#include <stdlib.h>

int main() {

int num;
printf("introduzca un numero entero:\n");
scanf("%i", &num);


if (num % 2 == 0) 
{
	printf("el numero es par:\n");
}
else 
{
	printf("el numero es impar:\n");
}

system("pause");
return 0;

}