#ifndef LIBABM_H_INCLUDED
#define LIBABM_H_INCLUDED


typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    char descripcion;
}eSector;

typedef struct//struct datosEmpleados
{
    int legajo;
    char nombre[20];
    char sexo;
    int sueldo;
    int sectorId;
    //eFecha fechaDeIngreso;
    int estado;
}eDatosEmpleados;


void inicializarEstado(eDatosEmpleados x[], int tam);
void mostrarEmpleado(eSector sect[], int tam, eDatosEmpleados empl);
void mostrarEmpleados(eDatosEmpleados empls[], int tam);
int buscarLibre(eDatosEmpleados x[], int tam);
void altaEmpleado();
void bajaEmpleado();
void obtenerSector(eSector sect[], int tam, int id, char desc[]);

#endif // LIBABM_H_INCLUDED
