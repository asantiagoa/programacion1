#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hora;
    int i1=0;

    for(i1;i1<2;i1++)
    {
        printf("ingrese la hora\n");
        fflush(stdin);
        scanf("%c", &hora);
        switch(hora)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
                {
                    printf("a dormir\n");
                    break;
                }
            case '7':
            case '8':
            case '9':
                {
                    printf("buenos dias\n");
                    break;
                }
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
                {
                    printf("aaaaaaaa\n");
                    break;
                }
            default:
                {
                    printf("hora invalida\n");
                    break;
                }
        }
    }
    return 0;
}
