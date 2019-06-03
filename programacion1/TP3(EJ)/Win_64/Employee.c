#include <stdio.h>
#include "Employee.h"

int employee_setSueldo(Employee* this, int sueldo)
{
    int todoOk=0;
    if ( this != NULL && sueldo > 0 && sueldo < 100000)
    {
        this->sueldo = sueldo;
        todoOk = 1;
    }
    return todoOk;
}

int employee_getSueldo(Employee* this, int* sueldo)
{


}

