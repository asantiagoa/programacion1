#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "libABM.h"


void inicializarEstado(eDatosEmpleados x[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        x[i].estado = 0;
        printf("empleado %d inicializado a %d",i ,x[i].estado);
    }


}



void mostrarEmpleado(eSector sect[], int tam, eDatosEmpleados empl)
{
    char nombreSector[20];
    //obtenerSector(sect, 4, eDatosEmpleados.sectorId, nombreSector);
    printf("%d  %10s  %c %10d %s \n", empl.legajo, empl.nombre, empl.sexo, empl.sueldo, nombreSector);
}




void mostrarEmpleados(eDatosEmpleados empls[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(empls[i].estado==1)
        {
            mostrarEmpleado(empls[i]);
        }

    }

}




void altaEmpleado(eDatosEmpleados x[], int tam)
{
    int indice;
    int legajo;
    int esta;

            if(indice!=-1))
            {
                printf(" ingrese legajo");
                scanf("%d", &legajo);
                esta = buscarEmpleado(x, tam, legajo);
                if(esta!=-1)
                {
                    printf("existe un empleado con ese legajo");
                    mostrarEmpleado(x[esta]);
                }
                else
                {
                    x[indice].legajo = legajo;

                    printf("ingrese nombre: ");
                    fflush(stdin);
                    gets(x[indice].nombre);

                    printf("ingrese sexo");
                    fflush(stdin);
                    scanf("%c",x[indice].sexo);
                    //etc
                }
            }
            else
            {
                printf("no hay indice libre");
            }
}



int buscarLibre(eDatosEmpleados x[], int tam)
{
    int i;
    int indiceLibre= -1;
    for(i=0;i<tam;i++)
    {
        if(x[i].estado==0)
        {
            indiceLibre = i;
            break;
        }

    }
    return indiceLibre;
}



int buscarEmpleado(eDatosEmpleados x[], int tam, int legajo)
{
    int i;
    int indiceLibre= -1;
    for(i=0;i<tam;i++)
    {
        if(x[i].estado==0 && x[i].legajo == legajo)
        {
            indiceLibre = i;
            break;
        }

    }
}




void obtenerSector(eSector sect[], int tam, int id, char desc[]);
{
    char nombreSector[20];


}
