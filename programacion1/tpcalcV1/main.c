#include <stdio.h>
#include <stdlib.h>
#include "libCalc.h"
int main()
{
    float num1, num2;
    num1 = 0;
    num2 = 0;
    float resSum, resRest, resMult, resDiv;
    int resFact;
    int flag;
    //int updater=0;
    int switchControl;
    do
    {
        printf("que hacer\n1: Ingresar primer operando(%.2f)                    2: Ingresar segundo operando(%.2f)\n3: Calcular todas las operaciones                    4: Mostrar resultados\n5: Salir\n",num1, num2);
        flag = 0;
        fflush(stdin);
        scanf("%d",&switchControl);
        switch(switchControl)
        {

            case 1:
            {
                fflush(stdin);
                printf("ingrese el primer operando: ");
                scanf("%f",&num1);
                break;
            }

            case 2:
            {
                fflush(stdin);
                printf("ingrese el segundo operando: ");
                scanf("%f",&num2);
                break;
            }

            case 3:
            {
                //caso de calcular todos los resultados
                flag=1;
                resSum = calcSum(num1, num2);
                resRest = calcRes(num1, num2);
                resMult = calcMult(num1, num2);
                resDiv = calcDiv(num1, num2);
                resFact = calcFact(num1);
                break;
            }

            case 4:
            {
                //caso de mostrar los resultados
                if (flag==1)//solo se ejecuta si se calculo antes
                {
                    printf("el resultado de la suma entre %.2f y %.2f es: %.2f\n",num1 ,num2 ,resSum);
                    printf("el resultado de la resta entre %.2f y %.2f es: %.2f\n",num1 ,num2 ,resRest);
                    printf("el resultado de la multiplicacion entre %.2f y %.2f es: %.2f\n",num1 ,num2 ,resMult);
                    printf("el cociente de la division entre %.2f y %.2f es: %.2f\n",num1 ,num2 ,resDiv);
                    printf("el factorial de %.0f es: %d",num1 ,resFact);
                    break;
                }
                else
                {
                    printf("error, debe realizar los calculos antes de mostrar los resultados.\n");
                    break;
                }
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                fflush(stdin);
                printf("entrada invalida, ingrese una de las opciones mostradas en el menu: ");
                scanf("%d",&switchControl);
            }
        }
    }while(switchControl!=5);
    return 0;
}
