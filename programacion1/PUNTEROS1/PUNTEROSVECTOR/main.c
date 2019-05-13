#include <stdio.h>
#include <stdlib.h>

//o todo vector o todo puntero
void mostrarVector1(int vec[],int tam);// :)
void mostrarVector2(int vec[],int tam);// :(
void mostrarVector3(int* vec,int tam);//  :(
void mostrarVector4(int* vec,int tam);//  :)

int main()
{
    int vect[]={3, 5, 2, 4, 3};
    mostrarVector1(vect, 5);
    printf("\n");
    mostrarVector2(vect, 5);
    printf("\n");
    mostrarVector3(vect, 5);
    printf("\n");
    mostrarVector4(vect, 5);
    printf("\n");
    return 0;
}

void mostrarVector1(int vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d",vec[i]);
    }
}

void mostrarVector2(int vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d", *(vec + i));
    }
}

void mostrarVector3(int* vec,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d",*(vec+i));
    }
}

void mostrarVector4(int* vec,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d",vec[i]);
    }
}
