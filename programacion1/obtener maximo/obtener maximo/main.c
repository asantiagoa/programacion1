#include <stdio.h>
#include <stdlib.h>
int maximo(int x, int y, int z);
int main()
{
    int num1;
    int num2;
    int num3;
    int numMax;


    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("ingrese el tercer numero: ");
    scanf("%d", &num3);
    numMax = maximo(num1, num2, num3);
    printf("el numero maximo es %d", numMax);
    return 0;

}



int maximo(int x, int y, int z)
{
    int mayor;

    mayor = x;
    if(mayor<y)
    {
        mayor = y;
        if(mayor<z)
        {
            mayor = z;
        }
    }
    else if(mayor<z)
    {
        mayor = z;
    }
    return mayor;
}
