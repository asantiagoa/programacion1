#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "empleado.h"

#define TAM 100
#define TAMSEC 5
#define TAMMENU 10
int main()
{
    eEmpleado lista[TAM];
    eMenu listaMenu[TAMMENU]={{1, "SOPA"},{2,"MILANESAS"},{3,"ENSALADA"},{4,"BORSCH"},{5,"SUSHI"},{6,"PAN"},{7,"PIZZA"},{8,"CARNE"},{9,"POLLO"},{10,"ARROZ"}};
    eSector listaSector[TAMSEC]={{1, "SISTEMAS"},{2, "RRHH"},{3, "VENTAS"},{4, "COMPRAS"}, {5, "LEGALES"}};
    char salir='n';
    do
    {
        switch(menuInical())
        {
            case 1://menu empleados
            {
                switch(menuEmpleados())
                {
                    case 1:
                    {
                        printf("\nAlta empleado\n\n");
                        altaEmpleado(lista, TAM, listaSector, TAMSEC);
                        system("pause");
                        break;
                    }
                    case 2:
                    {
                        printf("\nModificar empleado\n\n");
                        system("pause");
                        break;
                    }
                    case 3:
                    {
                        printf("\nBaja empleado\n\n");
                        system("pause");
                        break;
                    }
                    case 4:
                    {
                        printf("\nListar empleados\n\n");
                        //mostrarEmpleados(lista, TAM, sectores, TAMSEC);
                        system("pause");
                        break;
                    }
                    case 5:
                    {
                        break;
                    }
                    default:
                    {
                        printf("\nopcion invalida\n");
                        break;
                    }
                }
                break;
            }
            case 2://menu menu
            {
                switch(menuMenu())
                {
                    case 1:
                    {
                        printf("\nAlta Menu\n\n");
                        //altaEmpleado(lista, TAM, sectores, TAMSEC);
                        system("pause");
                        break;
                    }

                    case 2:
                    {
                        printf("\nModificar Menu\n\n");
                        system("pause");
                        break;
                    }

                    case 3:
                    {
                        printf("\nBaja Menu\n\n");
                        system("pause");
                        break;
                    }

                    case 4:
                    {
                        printf("\nListar Menu\n\n");
                        //mostrarEmpleados(lista, TAM, sectores, TAMSEC);
                        system("pause");
                        break;
                    }
                }
                break;
            }
            case 3://menu almuerzos
            {
                switch(menuAlmuerzo())
                {
                    case 1:
                    {
                        printf("\nAlta Almuerzo\n\n");
                        //altaEmpleado(lista, TAM, sectores, TAMSEC);
                        system("pause");
                        break;
                    }

                    case 2:
                    {
                        break;
                    }
                    default:
                    {
                        printf("\nOpcion invalida\n");
                        break;
                    }

                break;
            }
            case 4://salida
            {
                printf("esta seguro que desea salir?s/n");
                scanf("%c",&salir);
                break;
            }
            default:
            {
                printf("opcion invalida\n");
                system("break");
            }
        }
        }
        return 0;
    }while(salir != 's');
}
