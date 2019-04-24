#ifndef EMPLEADO_H
#define EMPLEADO_H


typedef struct//eMenu
{
    int idMenu;
    float importe;
    char descripcionMenu[51];
}eMenu;
typedef struct//eFecha
{
    int dia;
    int mes;
    int anio;
}eFecha;
typedef struct//eAlmuerzo
{
    int almuerzoId;
    int menuIdAlmuerzo;
    int legajoAlmuerzo;
    eFecha fechaAlmuerzo;
}eAlmuerzo;
typedef struct//eSector
{
    int sectorId;
    int sectorDesc;
}eSector;
typedef struct//eEmpleado
{
    int ocupado;
    int legajo;
    char nombre[51];
    char apellido [51];
    char sexo;
    float salario;
    eFecha fechaIngreso;
    int idSector;

}eEmpleado;


int menuInical();
int menuEmpleados();
int menuMenu();
int menuAlmuerzo();

#endif
