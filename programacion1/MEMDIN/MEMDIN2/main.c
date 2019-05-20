#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
}eEmpleado;


int main()
{
    eEmpleado empl;
    eEmpleado* pempl= (eEmpleado*) malloc(sizeof(eEmpleado));
    if(pempl == NULL)
    {
        exit(1);
    }
    printf("ingrese legajo: ");
    scanf("%d", &pempl->legajo);

    printf("ingrese nombre: ");
    fflush(stdin);
    //gets(pempl->nombre);
    scanf("%s", pempl->nombre);

    printf("ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &pempl->sexo);

    printf("ingrese sueldo: ");
    scanf("%f", &pempl->sueldo);

    printf("leg: %d     \nnombre: %s    \nsexo: %c  \nsueldo: %.2f", pempl->legajo, pempl->nombre, pempl->sexo, pempl->sueldo);
    return 0;
}
