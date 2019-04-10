#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//
struct datosPersonales
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
    int telefono;

};

int main()
{
    struct datosPersonales vecAgenda[3], vecContactos[3], vecAmigos[3];
    int i;
    for (i = 0; i<3; i++)
    {
        fflush(stdin);
        printf("ingresando datos para persona %d", i+1);
        printf("\ningrese nombre: ");
        gets(vecAgenda[i].nombre);
        printf("\ningrese apellido: ");
        gets(vecAgenda[i].apellido);
        printf("\ningrese calle: ");
        gets(vecAgenda[i].calle);
        printf("\ningrese numero: ");
        scanf("%d", &vecAgenda[i].numero);
        printf("\ningrese telefono: ");
        scanf("%d", &vecAgenda[i].telefono);
        fflush(stdin);
    }
    //asignacion de variables
    //contacto = agenda //copia todos los valores de agenda en contactos //contacto.nombre = agenda.nombre //copia el nombre en agenda a nombre en contacto
    for (i=0; i<3;i++)
    {
        printf("%d", i+1);
        printf(": %s", vecAgenda[i].nombre);
        printf(", %s", vecAgenda[i].apellido);
        printf(". %s", vecAgenda[i].calle);
        printf(" %d", vecAgenda[i].numero);
        printf(", %d\n", vecAgenda[i].telefono);
    }
    //asignar una estructura a otra
    for(i=0; i<3; i++)
    {

        strcpy(vecContactos[i].nombre, vecAgenda[i].nombre);
        strcpy(vecContactos[i].apellido, vecAgenda[i].apellido);
        strcpy(vecContactos[i].calle, vecAgenda[i].calle);
        vecContactos[i].numero = vecContactos[i].numero;
        vecContactos[i].telefono = vecContactos[i].telefono;
    }
    //si tienen el mismo formato
    for(i=0; i<3; i++)
    {
        vecAmigos[i]=vecContactos[i];//

    }

    return 0;
}
