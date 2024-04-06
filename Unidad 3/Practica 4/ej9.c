/* Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int opcion;

    while (intentos<=3)
    {
        printf("Ingrese su usuario\n");
        scanf("%i", &dniIngresado);
        printf("Ingrese su contraseña\n");
        scanf("%i", &passIngresado);
        if (dniIngresado == dni && passIngresado == pass)
        {
            ingresaCorrectamente=1;
            break;
        }
        else
        {
            printf("Ingreso erroneo\n");
            printf("Intento %i de 3\n", intentos);
            intentos++;
        }
        
        
    }
    if (ingresaCorrectamente)
    {
        printf("1- Consultar saldo\n 2- Consultar CBU\n 3- Salir\n");
        scanf("%i", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Su saldo es:%i\n", saldo);
            break;
        case 2:
            printf("Su CBU es:%i\n", cbu);
            break;
        case 3:
            printf("Gracia por utilizar nuestros servicios\n");
            break;
        default:
            break;
        }    
    }
    
    system("pause");
    
}
