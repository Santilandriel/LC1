 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 
 int main()

 {
    int num1, num2;

    int Resultado;

    printf("ingresar un numero entero:\n");
    scanf( "%i", &num1 ) ;

    printf("ingresar otro numero: \n ");
    scanf( "%i", &num2) ;

    Resultado = num1 + num2 ;
    
    //printf("el resultado es:%d\n", Resultado );

    printf("la suma de %i y %i es: %i\n", num1,num2, Resultado );
    
    
    system("pause");

    return 0 ;
 }


