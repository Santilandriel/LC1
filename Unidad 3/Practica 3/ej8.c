/*Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
número.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, multiplicador;
    printf("Ingrese numero 1\n");
    scanf("%d", &num1);


    for (int i = 0; i <=10; i++)
    {
     multiplicador=0;
        multiplicador=num1*i;
        printf("\n El numero %d multiplicado por %d es:%d",num1,i,multiplicador);//("\n %d x %d = %d")
    }
    system("pause");
    return 0;
}
