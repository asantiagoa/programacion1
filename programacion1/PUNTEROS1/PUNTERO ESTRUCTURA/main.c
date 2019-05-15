#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
}eEmpleado;


int main()
{
    int i;
    eEmpleado unEmpleado = {1234, "juan", 'm', 3000, {13, 5, 2019}};
    eEmpleado otroEmpleado= {1235, "juana", 'f', 3022, {2, 2, 2022}};
    eEmpleado lista[]= {unEmpleado, otroEmpleado};
    eEmpleado* punteroEmpleado;
    punteroEmpleado = &unEmpleado;
    printf("legajo: %d\n",punteroEmpleado->fechaIngreso.dia);//OPERADOR FLECHA()
    for(i=0;i<2;i++)
    {
        printf("%s\n",(lista+i)->nombre);
    }
    return 0;
}
