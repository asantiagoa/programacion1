#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//definicion
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
    //declaracion
    struct datosPersonales agenda;

    //salida de datos
    strcpy(agenda.nombre, "affh");
    strcpy(agenda.apellido, "sdfgdf");
    strcpy(agenda.calle, "mitre");
    agenda.numero = 750;

    printf("%s \n", agenda.nombre);
    printf("%s ", agenda.apellido);
    printf("\n%s ", agenda.calle);
    printf("%d ", agenda.numero);



    //entrada y salida de datos
    printf("\ningrese nombre: ");
    gets(agenda.nombre);
    fflush(stdin);

    printf("\ningrese apellido: ");
    gets(agenda.apellido);
    fflush(stdin);

    printf("\ningrese calle: ");
    gets(agenda.calle);
    fflush(stdin);

    printf("\ningrese numero: ");
    scanf("%d", &agenda.numero);
    fflush(stdin);

    printf("\ningrese telefono: ");
    scanf("%d", &agenda.telefono);
    fflush(stdin);

    printf("\n%s ", agenda.nombre);
    printf("\n%s ", agenda.apellido);
    printf("\n%s ", agenda.calle);
    printf(" %d ", agenda.numero);
    printf("\n%d ", agenda.telefono);




    return 0;
}
