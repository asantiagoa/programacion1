#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
}eEmpleado;

eEmpleado* newEmpleado();
eEmpleado mostrarEmpleado(eEmpleado* empleado);
eEmpleado* newEmpleadoParam(int leg, char* nombre, char sexo, float sueldo);
int main()
{
    newEmpleadoParam();

    return 0;
}


eEmpleado* newEmpleado()
{
    eEmpleado* nuevo;
    nuevo = (eEmpleado*) malloc(sizeof(eEmpleado));
    if(nuevo != NULL)
    {
        nuevo->legajo=0;
        strcpy(nuevo->nombre, "");
        nuevo->sexo ='a';
        nuevo->sueldo=0;
    }
    return nuevo;
}

eEmpleado* newEmpleadoParam(int leg, char* nombre, char sexo, float sueldo)
{
    eEmpleado* nuevo;
    nuevo = (eEmpleado*) malloc(sizeof(eEmpleado));
    if(nuevo != NULL)
    {
        nuevo->legajo=0;
        strcpy(nuevo->nombre, "");
        nuevo->sexo ='a';
        nuevo->sueldo=0;
    }
    return nuevo;
}

eEmpleado mostrarEmpleado(eEmpleado* pempl)
{
    if(pempl!=NULL)
    {
        printf("leg: %d     \nnombre: %s    \nsexo: %c  \nsueldo: %.2f", pempl->legajo, pempl->nombre, pempl->sexo, pempl->sueldo);
    }
}
