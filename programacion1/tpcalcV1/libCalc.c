#include "libCalc.h"
#include <stdio.h>
#include <stdlib.h>

float calcSum(float x, float y)   //función para la operación de suma.
{
    float totalSum;   //se declara la variable que tomará el valor del total de la suma.
    totalSum = x + y;   // se suman los dos números que el usuario ingresa y el resultado se asigna a la variable totalSum.
    return totalSum;    //return totalSum devuelve el valor de la variable totalSum cuando se llama la funcion.
}
float calcRes(float x, float y)   //funcion para la operación de resta.
{
    float totalRes;   //se declara la variable que tomará el valor del total de la resta.
    totalRes = x - y;   //se restan los dos números que el usuario ingresa y el resultado se asigna a la variable totalRes.
    return totalRes;    //return totalRes devuelve el valor de la variable totalRes cuando se llama la funcion.
}
float calcMult(float x, float y)  //función para la operación de multiplicacion.
{
    float totalMult;  //se declara la variable que tomará el valor del total de la multiplicación.
    totalMult = x * y;  //se multiplican los dos números que el usuario ingresa y el resultado se asigna a la variable totalMult.
    return totalMult;   //
}
float calcDiv(float x, float y)  //función para la operación de división.
{
    while(y==0)
    {
        printf("no se puede dividir por 0, ingrese otro numero: ");
        scanf("%f",&y);
    }
    float totalDiv;   //se declara la variable que tomará el valor del total de la división. el tipo float indica que la variable tomará un valor flotante, es decir, un número real.
    totalDiv = (float)x / (float)y;   //se transforman los números ingresados por el usuario a flotantes y se divide el primer número por el segundo. el resultado se asigna a la variable totalDiv.
    return totalDiv;
}
int calcFact(float x)  //función para la operación de factorial.
{
    int i1;//se declaran las variables a usar. i1 funciona como contador de la cantidad de iteraciones y factNum1 devolverá el factorial del primer número ingresado
    int factNum1 = 1;   //se inicializa factNum1 en 1 para que en el bucle siguiente se multiplique por el contador.
    for(i1=1;i1<=(int)x;i1++)    //se inicializa el contador en 1 ya que si se inicializara en 0 devolvería (factNum1 = factNum1 * 0) en la primera iteración y de la segunda en adelnte (0 = 0 * 1,2,3,etc). el bucle se repite una cantidad de veces igual al número ingresado por el usuario.
    {
        factNum1 = factNum1 * i1;   //ejemplo con numero 3 ingresado por el usuario-> 1°era iteracion: factNum1 = 1*1 | 2°da iteración: factNum1 = 1*2 | 3°era y ultima iteración: factNum1 = 2*3
    }
    return factNum1;
}
