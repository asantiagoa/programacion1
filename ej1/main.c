#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5;
    int num2 = 6;
    char carac = 'a';
    float num3 = 23.5;
    int num4 = num3;//igualar un entero a un numero flotante toma solamente la parte entera del flotante, no lo rendondea
    int numIng;
    printf("Hello world!\n \"eeeee\"\n");
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

    system(("pause"));

    return 0;
}
