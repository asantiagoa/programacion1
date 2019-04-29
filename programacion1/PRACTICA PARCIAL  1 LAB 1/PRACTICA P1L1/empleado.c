#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

int menuInical()
{
    int opcion;

    system("cls");
    printf("    MENU PRINCIPAL\n\n");
    printf("1- Menu Empleados\n");
    printf("2- Menu Menu\n");
    printf("3- Menu Almuerzos\n");
    printf("4- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int menuEmpleados()
{
    int opcion;

    system("cls");
    printf("    MENU EMPLEADOS\n\n");
    printf("1- Alta Empleados\n");
    printf("2- Modificar Empleado\n");
    printf("3- Baja Empleado\n");
    printf("4- Listar Empleados\n\n");
    printf("5- Volver\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int menuMenu()
{
    int opcion;

    system("cls");
    printf("    MENU MENU\n\n");
    printf("1- Alta Menu\n");
    printf("2- Modificar Menu\n");
    printf("3- Baja Menu\n");
    printf("4- Listar Menu\n\n");
    printf("5- Volver\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int menuAlmuerzo()
{
    int opcion;

    system("cls");
    printf("    MENU ALMUERZO\n\n");
    printf("1- Alta Almuerzo\n");
    printf("2- Volver\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



void altaEmpleado(eEmpleado vecEmpl[], int tamEmpl, eSector vecSec[], int tamSec)
{

    int i;
    int j;
    int indice = buscarIndiceLibre(vecEmpl, tamEmpl)
    int legajo;
    int existe;

    if (indice == -1)
    {
        printf("no hay indice libre");
    }
    else
    {
        printf("\ningrese legajo:");
        legajo = scanf("%d", &legajo);
        existeLegajo()


    }
}

int buscarIndiceLibre(eEmpleado vecEmpl[], int tam)
{
    int indice = -1;
    int i;
    for(i=0; i<TAM; i++)
    {
        if(vecEmpl[i].ocupado==0)
        {
            indice = i;
            break;
        }
    }
    return indice;

}

int existeLegajo(eEmpleado vecEmpl, int tamEmpl, int legajo)
{

}


#include "empleado.h"


