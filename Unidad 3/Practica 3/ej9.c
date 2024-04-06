#include<stdio.h>
#include<stdlib.h>

int main()
{
    int multiplicador;

    multiplicador=0;

for (int i = 1; i <= 9; i++)
{
    printf("\n Tabal del multiplicar del %d", i);
    for (int j = 1; j<=9; j++)
    {
        multiplicador=i*j;
        printf("\n %d x %d = %d",i,j,multiplicador);
    }
}
    system("pause");
    return 0;
}