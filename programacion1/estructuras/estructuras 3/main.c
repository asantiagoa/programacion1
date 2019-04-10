#include <stdio.h>
#include <stdlib.h>

int main()
{
    //estructuras anidadas
    struct direccion
    {
        char calle[20];
        int numero;
    };

    struct datosPersonales
    {
        char nombre;
        char apellido;
        struct direccion domicilio;
    };
    return 0;
}
