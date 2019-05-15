#include <stdio.h>
#include <stdlib.h>

int main()
{    char palabra[] = "asfgh";
    char* punteroC;
    char** punteroPuntero;
    punteroC = &palabra;
    punteroPuntero = &punteroC;
    while(**punteroPuntero!= '\0')
    {
        printf("%c", **punteroPuntero);
        punteroC++;
    }
    return 0;
}
