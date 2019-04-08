//pedir nombre y apellido. no modificar variable nombre o apellido. debe conseguirse nombre completo ymostrarse como Apellido, Nombre.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int validacionString(int tam, int auxTam);




int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];//19 + 19 + una , + un espacio + \0
    int i;



    printf("ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    validacionString(strlen(nombre), 19);


    printf("ingrese apellido: ");
    fflush(stdin);
    gets(apellido);
    validacionString(strlen(apellido), 19);


    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);


    strlwr(nombreCompleto);
    nombreCompleto[0] = toupper(nombreCompleto[0]);
    for (i=0; i < strlen(nombreCompleto); i++)
    {
        if (nombreCompleto[i]== ' ')
        {
            nombreCompleto[i+1] = toupper(nombreCompleto[i+1]);

        }
    }



    puts(nombreCompleto);
    return 0;

}



int validacionString(int tam, int auxTam)
{
    char stringX[tam];
    char auxiliar[auxTam];

    while(strlen(auxiliar)>strlen(stringX))
    {
        printf("el dato ingresado supera el limite de caracteres, ingrese un dato dentro del limite");
        gets(auxiliar);
    }
    strcpy(stringX, auxiliar);
    return 0;
}
