/*Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
a. Informar la inflación anual
b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
0.1
c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
0.9*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float vector[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float total_anual=0;
    float mayor_inflacion=0;
    float menor_inflacion=0;
    float mes1=0;
    float mes2=0;

    for (int i = 0; i < 12; i++)
    {
        printf("El mes %d tiene de inflacion %.1f \n", i + 1, vector[i]);
        total_anual= total_anual + vector[i];

        if (mayor_inflacion < vector[i])
        {
            mayor_inflacion=vector[i];
            mes1=i+1;
        }
        if (menor_inflacion > vector[i]);
        {
            menor_inflacion=vector[i];
            mes2=i+1;
        }
        
    }
    printf("Inflacion anual:%.1f\n", total_anual);
    printf("Mes %1.f = %.1f\n", mes1, mayor_inflacion);
    printf("Mes %1.f = %.1f\n", mes2, menor_inflacion);

    system("pause");
    return 0;
}
/*
#include <stdlib.h>
#include <stdio.h>
void main()
{
    float inflacionanual, menorinflacion, mayorinflacion;
    int menormes, mayormes;
    menorinflacion = 1;
    menormes = 1;
    mayorinflacion = 0;
    mayormes = 0;
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
for (int i = 0; i < 12; i++)
    {
        inflacionanual = inflacionanual + inflacion[i];
        if (inflacion[i] < menorinflacion)
        {
            menorinflacion = inflacion[i];
            menormes = i + 1;
        }
        if (inflacion[i] > mayorinflacion)
        {
            mayorinflacion = inflacion[i];
            mayormes = i + 1;
        }
    }
    printf("La inflacion anual es de %.1f \n", inflacionanual);
    printf("La inflacion mas baja es de %.1f, correspondiente al mes %d \n", menorinflacion, menormes);
    printf("La inflacion mas alta es de %.1f, correspondiente al mes %d \n", mayorinflacion, mayormes);
}*/