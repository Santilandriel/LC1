 #include <stdio.h>
 #include <math.h>//libreria para usar pow y sqrt
 #include <stdlib.h>//para usar dystem
 int main()
 {
    double lado1, lado2, perimetro, hipotunusa,aux, superficie; //va float porque son valores q flotan ej 5,5 
    
    printf("ingresar un lado:\n");
    scanf("%lf", &lado1);

    printf("ingresar el otro lado:\n");
    scanf("%lf", &lado2);

    aux= lado1*lado1 + lado2*lado2; /*aux = pow(lado1) + pow(lado2),
     pow(lado1, 2)*/

    hipotunusa= sqrt(aux);

    perimetro= lado1 + lado2 + hipotunusa;

    superficie= (lado1*lado2)/2;
     
    printf("la hipotenusa es:%.lf\n", hipotunusa);

    printf("el perimetro es:%.lf\n", perimetro);

    printf("el area es:%.lf\n", superficie);


    system("pause");
    return 0;
 }
 