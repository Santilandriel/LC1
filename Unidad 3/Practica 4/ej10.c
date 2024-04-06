/*Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:*/
/*void main() {
    float num1, num2, resultado;
    int opcion, contador;
    contador = 0;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
    scanf("%i", &opcion);*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    float num1,num2, contador=0;
    
    int opcion; //variable donde voy a guardar la opcion q eliga el ususrio .por eso en int(1,2,3,4,5) si fuera (a,s,d,) seria char
    do
    {
       
   
    
      printf("ingrese num 1\n");
      scanf("%f", &num1);

      printf("ingrese num 2\n");
      scanf("%f", &num2);

   
   
    
       printf(" 1. Informar su suma\n 2. Informar su resta\n 3. Informar su multiplicación\n 4. Informar su división\n 5. Operaciones realizadas\n 6. Salir\n");
       scanf("%i", &opcion);

        while (opcion<1 || opcion>6) {
        printf("Numero no valido, reingrese el numero:\n");
        scanf("%i", &opcion);
        }
    
    
    
        switch (opcion)
        {
         case 1:
         printf("la suma es:%2.f\n", num1 + num2);
            contador=contador+1;//acumulador ++;// para restar contador--
            break;
         case 2:
            printf("la reesta es:%2.f\n", num1 - num2);
            contador ++;
            break;
         case 3:
            printf("la multiplicacion:%2.f\n", num1 * num2);
            contador=contador+1;
            break;
         case 4:
            printf("la division es:%2.f\n", num1/num2);
            contador=contador+1;
            break;
         case 5:
            contador=contador+1;
            printf("Operaciones realizadas:%2.f \n", contador);
            break;
         case 6:
            break;
         default:
            printf("opcion invalida\n");
            break;
        }
    } while (opcion != 6);
    

    system("pause");
    return 0 ;
}