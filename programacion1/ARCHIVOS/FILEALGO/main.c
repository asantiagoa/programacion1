#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* f;
    int id;
    char nombre[20];
    char apellido[20];
    float sueldo;
    //int numeros[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    f = fopen("./archivo.txt", "r");
    //fprintf(f, "%d", numeros[2]);
    if (f==NULL)
    {
        printf("no se pudo abrir el archivo");
        system("pause");
        exit(EXIT_FAILURE);
    }

    while(!feof(f))
    {
         cant = fscanf(f, "%d %d %d %d",&id, &num2, &num3, &num4);
        if (cant<4)
        {
            break;
        }
        printf("%d,%d,%d,%d\n", num1, num2, num3, num4);
            if(feof(f))
    {
        break;
    }
    }

    return 0;
}
