#include <stdio.h>
#include <stdlib.h>
#include "libCalc.h"
int main()
{
    int num1;//primer numero ingresado
    int num2;//segundo numero ingresado
    int operacion;//variable para switch de seleccion de operacion
    int resultado;//variable a la que se asigna el resultado de la operacion(suma resta multiplicacion) para luego mostrarlo
    unsigned long long int resFact;//variable a la que se asigna el factorial de un numero para luego mostrarlo. tipo unsigned long long int para ampliar el numero de caracteres que puede contener.
    float resDiv;//variable a la que se asigna el cociente de la division entre los dos numeros. tipo float para poder asignarle un valor con decimales
    int casoFactorial;//variable para switch que permite seleccionar uno de los dos numeros ingresados para conseguir su factorial
    unsigned long long int numLong1, numLong2;//igual valor que los numeros ingresados. para no tener que castear muchas veces
    printf("ingrese el primer numero: ");
    scanf("%d", &num1);//pide el primer numero
    numLong1 = (unsigned long long int)num1;
    fflush(stdin);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);//pide el segundo numero
    numLong2 = (unsigned long long int)num2;
    fflush(stdin);
    printf("ingrese el numero correspondiente a la operacion que desa realizar?\nsuma:1\nresta:2\nmultiplicacion:3\ndivision:4\nfactorial:5\n");//el usuario elige mediante una entrada numerica la operacion matematica a realizar
    fflush(stdin);
    scanf("%d", &operacion);//le da un valor a la variable operacion para que al comenzar el switch seleccione la operacion a realizar

    switch(operacion)//
    {
        case 1://caso de suma. llama a la funcion calcSum
            {
                fflush(stdin);
                resultado = calcSum(num1, num2);//se llama a la funcion calcSum con los dos numeros ingresados y se asigna su resultado a la variable resultado
                printf("%d\n",resultado);//se imprime la variable resultado
                system(("pause"));
                break;
            }
        case 2://caso de resta. llama a la funcion calcRes
            {
                fflush(stdin);
                resultado = calcRes(num1, num2);//se llama a la funcion calcRes con los dos numeros ingresados y se asigna su resultado a la variable resultado
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        case 3://caso de multiplicacion. llama a la funcion calcMult
            {
                fflush(stdin);
                resultado = calcMult(num1, num2);//se llama a la funcion calcMult con los dos numeros ingresados y se asigna su resultado a la variable resultado
                printf("%d\n",resultado);
                system(("pause"));
                break;
            }
        case 4://caso de division. llama a la funcion calcDiv
            {
                fflush(stdin);
                resDiv = calcDiv(num1, num2);//se llama a la funcion calcDiv con los dos numeros ingresados y se asigna su cociente a la variable resDiv
                printf("%.2f\n",resDiv);//se imprime el valor de la variable resDiv. %.2f indica que se usa una mascara de tipo float y limita los decimales a 2
                system(("pause"));
                break;
            }
        case 5://caso de factorial. llama a la funcion calcFact
            {
                printf("obtener factorial de primer(1) o segundo(2) número?");
                scanf("%d",&casoFactorial);//se pregunta si se desea obtener el factorial del primer o segundo numero ingresado
                switch(casoFactorial)
                {
                    case 1://caso para factorial de primer numero ingresado
                    {
                        fflush(stdin);
                        resFact = calcFact(numLong1);//se llama a la funcion calcFact que consigue el factorial del numero ingresado y lo asigna a la variable resFact
                        printf("%llu\n",resFact);//imprime el valor de resFact con la mascara %llu para las variables tipo unsigned long long int.
                        system(("pause"));
                        break;
                    }
                    case 2://caso para factorial de segundo numero ingresado
                    {
                        fflush(stdin);
                        resFact = calcFact(numLong2);
                        printf("%llu\n",resFact);
                        system(("pause"));
                        break;
                    }
                }
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
