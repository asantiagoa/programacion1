#include <stdio.h>
#include <stdlib.h>
#include "libCalc.h"
int main()
{
    int num1, num2, operacion, resultado;
    //long int numLong1, numLong2;
    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    //numLong1 = (long int)num1;
    fflush(stdin);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);
    //numLong2 = (long int)num2;
    fflush(stdin);
    printf("ingrese el numero correspondiente a la operacion que desa realizar?\nsuma:1\nresta:2\nmultiplicacion:3\ndivision:4\nfactorial:5\n");
    fflush(stdin);
    scanf("%d", &operacion);

    switch(operacion)//
    {
        case 1://caso de suma. llama a la funcion calcSum
            {
                fflush(stdin);
                resultado = calcSum(num1, num2);
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        case 2://caso de resta. llama a la funcion calcRes
            {
                fflush(stdin);
                resultado = calcRes(num1, num2);
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        case 3://caso de multiplicacion. llama a la funcion calcMult
            {
                fflush(stdin);
                resultado = calcMult(num1, num2);
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        case 4://caso de division. llama a la funcion calcDiv
            {
                fflush(stdin);
                resultado = calcDiv(num1, num2);
                printf("%.2f\n",(float)resultado);
                system(("pause"));
                break;
            }
        case 5://caso de factorial. llama a la funcion calcFact
            {
                fflush(stdin);
                resultado = calcFact(num1, num2);
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        default://default en caso de entrada invalida
            {
                printf("no es una entrada valida\n");
                fflush(stdin);
                system(("pause"));
                break;
            }
    }
    return 0;

}
