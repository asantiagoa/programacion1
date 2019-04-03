#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vect[5] = {7 , 5 , 6 , 2 , 8};
    int i;
    int j;
    int z;
    int aux;

    for(i=0;i<CANT-1;i++)
    {
        for(j = i+1; j<CANT;j++)
        {
            if(vect[i] > vect[j])//mayor asciendo menor desciendo
            {
                aux = vect[i];
                vect[i] = vect[j];
                vect[j] = aux;
            }
        }
    }
    for(z = 0; z<CANT; z++)
    {
        printf("%d", vect[z]);
    }

    return 0;
}
