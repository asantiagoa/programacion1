#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int numSum;
    float numDiv;
    int numMod;
    printf("ingrese los 2 numeros: ");
    scanf("%d %d",&num1, &num2);
    //while
    printf("%d\=num1 %d\=num2\n",num1 , num2);
    numSum = num1 + num2;
    printf("la suma es %d\n",numSum);
    numDiv = (float)num1/num2;
    numMod = num1%num2;
    printf("el resultado de la division es %.1f y el resto es %d",numDiv ,numMod);

    return 0;
}
