/*
flowchart alta empleado
           no->informo no hay lugar
hay lugar<                                   si->lo muestro, lo informo
           si->pido legajo->me fijo si esta<
                                             no->pido el resto de los campos->lo cambio, informo con exito

flowchart bajaempleado
                                                                no confirmo->informo cancel baja
                              esta->muestro empleado, confirmo<
pido legajo->me fijo si esta<                                   confirmo->pasamos campo ocupado a 0, informo
                              no esta->informa que no esta
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#define TAM 2
#define TAMSEC 4




typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    char descripcion[20];
}eSector;

typedef struct//struct datosEmpleados
{
    int legajo;
    char nombre[20];
    char sexo;
    int sueldo;
    int sectorId;
    //eFecha fechaDeIngreso;
    int estado;
}eDatosEmpleados;


void inicializarEstado(eDatosEmpleados x[], int tam);
void mostrarEmpleado(eSector sect[], int tam, eDatosEmpleados empl);
void mostrarEmpleados(eSector sect[], int tamsec, eDatosEmpleados empls[], int tam);
int buscarLibre(eDatosEmpleados x[], int tam);
void altaEmpleado(eDatosEmpleados x[], int tam, eSector sec[], int tamSec);
void bajaEmpleado(eDatosEmpleados x[], int tam, eSector sec[], int tamSec);
int obtenerSector(eSector sect[], int tam, int id, char desc[]);
void mostrarSectoresConEmpleados(eDatosEmpleados empl[], int tam, eSector sect[], int tamSec);
void mostrarCantEmplXSector(eDatosEmpleados empl[], int tam, eSector sect[], int tamSec);

int main()
{

    eDatosEmpleados lista[TAM]={{1111, "sdf", 'm', 123123, 1, 1}, {2222, "sjhh", 'f', 234234234, 1, 1}};
    eSector sectores[TAMSEC]={{1, "sistemas"},{2, "RRHH"},{3, "gerencia"},{4, "sector4"}};
    //inicializarEstado(lista, TAM);
    int menu;
    char salida = 'n';

    do
    {
    system("cls");
    printf("1-Alta empleado. \n2-Baja Empleado. \n3-Modificacion empleado. \n4-Listar. \n5-Ordenar. \n6-Mostrar sectores con empleados. \n7-Salir.");
    printf("\nIngrese opcion: ");
    fflush(stdin);
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
        {

            system(("pause"));
            break;
        }
        case 2:
        {
            printf("\nbaja empleado");
            break;
        }
        case 3:
        {
            printf("\nmod empleado");
            break;
        }
        case 4:
        {
            printf("\nlistar");
            mostrarEmpleados(sectores, 4, lista, TAM);
                system("pause");
            break;
        }
        case 5:
        {
            printf("\nordenar");
            break;
        }
        case 6:
        {
            mostrarSectoresConEmpleados(lista, TAM, sectores, TAMSEC);
            mostrarCantEmplXSector(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;
        }
        case 7:
        {
            printf("\ndesea salir? (s/n): ");
            fflush(stdin);
            scanf("%c", &salida);
            break;

        }
        default:
        {
            fflush(stdin);
            printf("opcion invalida, ingrese de nuevo: ");
            scanf("%d",&menu);
            break;
        }
    }
    }while(salida != 's');

    return 0;
}


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
    obtenerSector(sect, TAMSEC, empl.sectorId, nombreSector);
    printf("%d  %10s  %c %10d %s \n", empl.legajo, empl.nombre, empl.sexo, empl.sueldo, nombreSector);
}




void mostrarEmpleados(eSector sect[], int tamsec, eDatosEmpleados empls[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(empls[i].estado==1)
        {
            mostrarEmpleado(sect,4, empls[i]);
        }

    }

}




void altaEmpleado(eDatosEmpleados x[], int tam, eSector sec[], int tamSec)
{
    int indice;
    int legajo;
    int esta;

            if(indice!=-1)
            {
                printf(" ingrese legajo");
                scanf("%d", &legajo);
                esta = buscarEmpleado(x, tam, legajo);
                if(esta!=-1)
                {
                    printf("existe un empleado con ese legajo");
                    //mostrarEmpleado(x[esta]);
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




int obtenerSector(eSector sect[], int tam, int id, char desc[])
{
    int todoOk = 0;
    int i;
    for(i=0;i<tam;i++)
    {
        if (id==sect[i].id)
        {
            strcpy(desc, sect[i].descripcion);
            todoOk =1;
            break;

        }
    }
    return todoOk;

}
void mostrarSectoresConEmpleados(eDatosEmpleados empl[], int tam, eSector sect[], int tamSec)
{
    int i;
    int j;
    for(i=0; i<tamSec;i++)
    {
        printf("Sector: %s\n\n",sect[i].descripcion);
        for(j=0; j<tam;j++)
        {
            if((empl[j].sectorId == sect[i].id)&&(empl[j].estado==1))
            {
                mostrarEmpleado(sect, tamSec, empl[j]);
            }
        }
    }

}
void mostrarCantEmplXSector(eDatosEmpleados empl[], int tam, eSector sect[], int tamSec)
{
    int contador;
    int i;//sect
    int j;//empl
    for(i=0;i<tamSec;i++)
    {
        contador =0;
        printf("sector: %s\n\n",sect[i].descripcion);
        for(j=0;j<tam;j++)
        {
            if((sect[i].id == empl[j].sectorId) && (empl[j].estado==1))
            {
                contador++;
            }
        }
        printf("%d",contador);
    }
}





