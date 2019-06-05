#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/
/*
1)
while feof()
{
fscanf(); , fread() en el 2)
newEmpl;
ll_add;

}
ll_get(), punto 4)
ll_remove()-> elimina y compacta
for(i=0;i<ll_len();i++)
*/

int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;

            case 2:
                controller_loadFromBinary("data.csv", listaEmpleados);
        }
    }while(option != 10);
    return 0;
}
