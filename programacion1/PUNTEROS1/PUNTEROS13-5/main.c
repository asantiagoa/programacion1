#include <stdio.h>
#include <stdlib.h>

void leerPuntero(int* p);


int main()
{
    int x = 10;
    printf("%d\n",x);
    leerPuntero(&x);
    printf(" despues %d\n",x);

    return 0;
}


void leerPuntero(int* p)
{
    printf(" funcion %d\n", *p);
}
