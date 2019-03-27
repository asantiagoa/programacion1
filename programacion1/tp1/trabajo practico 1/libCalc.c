#include "libCalc.h"
#include <stdio.h>
#include <stdlib.h>

int calcSum(int x, int y)   //funci�n para la operaci�n de suma.
{
    int totalSum;   //se declara la variable que tomar� el valor del total de la suma.
    totalSum = x + y;   // se suman los dos n�meros que el usuario ingresa y el resultado se asigna a la variable totalSum.
    return totalSum;    //return totalSum devuelve el valor de la variable totalSum cuando se llama la funcion.
}
int calcRes(int x, int y)   //funcion para la operaci�n de resta.
{
    int totalRes;   //se declara la variable que tomar� el valor del total de la resta.
    totalRes = x - y;   //se restan los dos n�meros que el usuario ingresa y el resultado se asigna a la variable totalRes.
    return totalRes;    //return totalRes devuelve el valor de la variable totalRes cuando se llama la funcion.
}
int calcMult(int x, int y)  //funci�n para la operaci�n de multiplicacion.
{
    int totalMult;  //se declara la variable que tomar� el valor del total de la multiplicaci�n.
    totalMult = x * y;  //se multiplican los dos n�meros que el usuario ingresa y el resultado se asigna a la variable totalMult.
    return totalMult;   //
}
float calcDiv(int x, int y)  //funci�n para la operaci�n de divisi�n.
{
    while(y==0)
    {
        printf("no se puede dividir por 0, ingrese otro numero: ");
        scanf("%d",&y);
    }
    float totalDiv;   //se declara la variable que tomar� el valor del total de la divisi�n. el tipo float indica que la variable tomar� un valor flotante, es decir, un n�mero real.
    totalDiv = (float)x / (float)y;   //se transforman los n�meros ingresados por el usuario a flotantes y se divide el primer n�mero por el segundo. el resultado se asigna a la variable totalDiv.
    return totalDiv;
}
unsigned long long int calcFact(unsigned long long int x)  //funci�n para la operaci�n de factorial.
{
    int i1;//se declaran las variables a usar. i1 funciona como contador de la cantidad de iteraciones y factNum1 devolver� el factorial del primer n�mero ingresado
    unsigned long long int factNum1 = 1;   //se inicializa factNum1 en 1 para que en el bucle siguiente se multiplique por el contador.
    for(i1=1;i1<=x;i1++)    //se inicializa el contador en 1 ya que si se inicializara en 0 devolver�a (factNum1 = factNum1 * 0) en la primera iteraci�n y de la segunda en adelnte (0 = 0 * 1,2,3,etc). el bucle se repite una cantidad de veces igual al n�mero ingresado por el usuario.
    {
        factNum1 = factNum1 * (unsigned long long)i1;   //ejemplo con numero 3 ingresado por el usuario-> 1�era iteracion: factNum1 = 1*1 | 2�da iteraci�n: factNum1 = 1*2 | 3�era y ultima iteraci�n: factNum1 = 2*3
    }
    return factNum1;
}
