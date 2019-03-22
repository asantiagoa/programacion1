#include <stdio.h>
#include <stdlib.h>
#include "libCalc.h"
int main()
{
    int num1, num2, operacion;
    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("ingrese el numero correspondiente a la operacion que desa realizar?\nsuma:1\nresta:2\nmultiplicacion:3\ndivision:4\nfactorial:5\n");
    fflush(stdin);
    scanf("%d", &operacion);

    switch(operacion)
    {
        case 1:
            {
                calcSum(num1, num2);
                fflush(stdin);
                system(("pause"));
                break;
            }
        case 2:
            {
                calcRes(num1, num2);
                fflush(stdin);
                system(("pause"));
                break;
            }
        case 3:
            {
                calcMult(num1, num2);
                fflush(stdin);
                system(("pause"));
                break;
            }
        case 4:
            {
                calcDiv(num1, num2);
                fflush(stdin);
                system(("pause"));
                break;
            }
        case 5:
            {
                calcFact(num1, num2);
                fflush(stdin);
                system(("pause"));
                break;
            }
        default:
            {
                printf("no es una entrada valida\n");
                fflush(stdin);
                system(("pause"));
                break;
            }
    }
    return 0;

}
