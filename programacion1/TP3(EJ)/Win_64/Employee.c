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
    int todoOk=0;
    if(this !=NULL && sueldo != NULL)
    {
        *sueldo = this->sueldo;
        todoOk=1;
    }

    return todoOk;
}

Employee* employee_new()
{
    todoOk=0;
    Employee* nuevoEmpleado = (Employee*)malloc(sizeof(Employee));
    if(nuevoEmpleado != NULL)
    {
        if(employee_setId(nuevoEmpleado, atoi(idStr)))
        {
            if(employee_setNombre(nuevoEmpleado,nombreStr)==1)
            {
                if(employee_setHorasTrabajadas(nuevoEmpleado, horasTrabajadasStr==1))
                {
                    if(employee_setSueldo(nuevoEmpleado, sueldoStr))
                    {
                        todoOk =1;
                    }
                }
            }
        }

        /*nuevoEmpleado->id=0;
        strcpy(nuevoEmpleado->nombre, "");
        nuevoEmpleado->horasTrabajadas=0;
        nuevoEmpleado->sueldo=0;*/
        if(todoOk==0)
        {
            free(nuevoEmpleado);
            nuevoEmpleado = NULL;
        }
    }
    return nuevoEmpleado;
}

Employee* employee_newParametros(char* idStr, char* nombreStr, char* horasTrabajadasStr, char* sueldoStr)
{
    Employee* nuevoEmpleado = (Employee*)malloc(sizeof(Employee));
    if(nuevoEmpleado != NULL)
    {
        nuevoEmpleado->id=atoi(idStr);
        strcpy(nuevoEmpleado->nombre, nombreStr);
        nuevoEmpleado->horasTrabajadas=atoi(horasTrabajadasStr);
        nuevoEmpleado->sueldo=atoi(sueldoStr);
    }
    return nuevoEmpleado;
}


int employee_setId(Employee* this, int id)
{
    int todoOk=0;
    if ( this != NULL && sueldo > 0)
    {
        this->id = id;
        todoOk = 1;
    }
    return todoOk;
}

int employee_getId(Employee* this, int* id)
{
    int todoOk=0;
    if(this !=NULL && id != NULL)
    {
        *id = this->id;
        todoOk=1;
    }

    return todoOk;
}


