#include<stdio.h>
#include<stdlib.h>

int main(){

    float nota;
    
    printf("ingrese la nota\n");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10){
    printf("ingrese una nota valida\n");
    scanf("%f", &nota);
    }

    if (nota <4 ){
        printf("reprobado\n");
    }
    else if (nota>= 4 && nota < 6){
        printf("regular\n");
    }
    else{
        printf("aprobado\n");
    }
    system("pause\n");
    system("cls");
    return 0;
}