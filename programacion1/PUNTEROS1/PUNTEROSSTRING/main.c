#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarCadena(char* cadena);
void getChar(char* message, char* caracter);

int main()
{
    char sexo;
    getChar("ingrese sexo", &sexo);
    printf("\nel sexo es %c", sexo);
    char mensaje[20]= "\nhola mundo";
    mostrarCadena(mensaje);
    return 0;
}


void mostrarCadena(char* cadena)
{
    while (*cadena != '\0')
    {
        printf("%c",*cadena);
        cadena++;
    }
}

void getChar(char* message, char* caracter)
{
    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter);
}
