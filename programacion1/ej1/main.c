#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion de variables
    int num1 = 5;
    int num2 = 6;
    char carac = 'a';
    float num3 = 23.5;
    int num4 = num3;//igualar un entero a un numero flotante toma solamente la parte entera del flotante, no lo rendondea
    int numIng;
    int edad;
    int i = 0;
    int i2;
    int i3 = 0;


    //entrada/salida
    printf("Hello world!\n\"eeeee\"\n");
    printf("AaA0123\n");
    printf("la variable vale %d numero\n",num1);
    printf("la variable vale %d y %d numero\n",num1, num2);
    printf("la suma es vale %d numero\n",num1 + num2);
    printf("los numeros son %d y %d, el caracter es %c\n",num1, num2, carac);
    printf("la variable num3 vale %.2f numero\n",num3);//%.2f limita los valores decimales a 2. %.0f lo muestra como entero
    printf("el numero 4 vale %d \n",num4);
    printf("%d \n",sizeof(int));
    printf("ingrese un numero: ");
    scanf("%d", &numIng);//ampersand+nombre de variable consigue el valor de memoria de la variable.
    printf("el numero ingresado es %d \n", numIng);
    printf("ingrese la edad: ");
    scanf("%d", &edad);

    //condicionales
    if (edad == 15)
    {
        printf("quince aos (%d)\n", edad);
    }
    if (edad<18)
    {
        printf("menor de edad\n");
    }
    else if(edad>35)
    {
        printf("es una persona mayor\n");
    }

    else
    {
        printf("mayor de edad\n");
    }


    //switch en C no soporta case de STRINGS ("...") solo caracteres ('A')
    switch(edad)
    {
    case 1:
    case 2:
    case 3:
        {
            printf("infante\n");
            break;
        }
    default:
        {
            printf("no infante\n");
            break;
        }
    }




    //iteraciones  ##for para numero de repeticiones especificos, while para repeticiones no definidas.
    for(i2 = 0; i2<5 ; i2++)// i2 = 0 ==A, i2<5 == B, i2++ ==C. 1era ejecucion-> ejecuta A-->B. 2da ejecucion-> ejecuta C-->B.
    {
        printf("%d i2\n", (i2+1));
    }

    while(i<5)
    {
        i++;
        printf("%d i\n", i);
    }

    do
    {
        i3++;
        printf("%d i3\n", i3);
    }while(i3<5);




    //pausa hasta input
    system(("pause"));

    return 0;
}
