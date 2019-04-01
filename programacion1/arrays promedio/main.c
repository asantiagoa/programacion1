#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero[5];
    int suma = 0;
    float promedio;
    for(i = 0; i<5; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&numero[i]);
    }
    printf("los numeros ingresados son :");
    for(i = 0; i<5; i++)
    {
        printf("%d, ",numero[i]);
        printf("\n");
    }

    for(i = 0; i<5; i++)
    {
        suma = suma + numero[i];
    }
    printf("la suma de los numeros es: %d ",suma);


    return 0;
}
