#include <stdio.h>
#include <stdlib.h>
void main()
{
    int dnis[10] = {0};
    float notas[10] = {0};
    int dniABuscar;
    // float alumnos[10][2] = {0};

    int opcion;
    int tam = 10;

    do
    {
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d", &opcion);
if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                
                break;
            case 2:
                printf("Ingrese el dni del alumno a buscar\n");
                scanf("%d", &dniABuscar);

                for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        printf("La nota del alumno con dni %d es %.2f", dnis[i], notas[i]);
                    }
                }
               
                //buscar un alumno con while
                break;
            case 3:
                // Modificar una nota
               
                break;
            case 4:
                // Mostrar alumnos

                break;
            default:
                printf("opción inválida");
                break;
            }
        }
    } while (opcion != 5);
}