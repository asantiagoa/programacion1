#include "libCalc.h"
#include <stdio.h>
#include <stdlib.h>

float calcSum(float x, float y)
{
    float totalSum;
    totalSum = x + y;
    //printf("suma realizada correctamente\n");
    return totalSum;
}
float calcRes(float x, float y)
{
    float totalRes;
    totalRes = x - y;
    //printf("resta realizada correctamente\n");
    return totalRes;
}
float calcMult(float x, float y)
{
    float totalMult;
    totalMult = x * y;
    //printf("multiplicacion realizada correctamente\n");
    return totalMult;
}
float calcDiv(float x, float y)
{
    float totalDiv;
    totalDiv = x / y;
    return totalDiv;
}
int calcFact(float x)
{
    int i1;
    int factNum1 = 1;
        for(i1=1;i1<=(int)x;i1++)
        {
            factNum1 = factNum1 * i1;
        }
    return factNum1;
}
