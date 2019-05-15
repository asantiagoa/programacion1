#include <stdio.h>
#include <stdlib.h>

void recorrerPuntero(char* puntero, int tam);
void recorrerPuntero2(char* punteroCadena);
void recorrerPuntero3(char* punteroCadena);

int main()
{
    char vec[]={'h', 'o', 'l', 'a'};
    char* punt;
    punt = vec;
    //recorrerPuntero(punt, 4);
    recorrerPuntero3(punt);
    return 0;
}

void recorrerPuntero(char* puntero, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("\n%c   %p",*(puntero+i), puntero);
    }
}


void recorrerPuntero2(char* punteroCadena)
{
    while(*punteroCadena != '\0')
    {
    printf("\n %c",*punteroCadena);
    punteroCadena++;
    }
}

void recorrerPuntero3(char* punteroCadena)
{
    int i=0;
    while(*(punteroCadena+i) != '\0')
    {
    printf("\n %c",*(punteroCadena+i));
    i++;
    }
}




