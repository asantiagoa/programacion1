#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int legajo;
    char nombre[20];
    char apellido[20];
    float sueldo;
}eEmpleado;

void mostrarEmpleados(eEmpleado** lista, int len);
eEmpleado* new_EmpleadoParam( int leg, char* nombre, char* apellido, float sueldo);
eEmpleado* new_Empleado();
int listaParaImprimir(eEmpleado** lista, int tam, char* path);
int guardarEmpleadosCsv(eEmpleado** lista, int tam, char* path);
int guardarEmpleadosbinario(eEmpleado** lista, int tam, char* path);

int main()
{
     FILE* f;

     char buffer[4][20];
     eEmpleado** lista = (eEmpleado**) malloc(sizeof(eEmpleado*));
     eEmpleado** pAuxEmpleado;
     int cont = 0;
     int cant;
    //empleados.bin, rb o empleados.csv, r
    f = fopen("./empleados.bin","rb");

    if(f == NULL){
        printf("No se pudo abrir el archivo. Me voy a cerrar.\n");
        system("pause");
        exit(EXIT_FAILURE);
    }
    //comentar para hacer con archivos binarios
    //fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    //printf("%s   %s    %s    %s\n\n", buffer[0], buffer[1], buffer[2], buffer[3]);
     while( !feof(f) ){

    //cant = fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    cant = fread(*(lista+cont),sizeof(eEmpleado), 1, f);
     if( cant < 4){
        break;
      }

      eEmpleado* nuevoEmpleado = new_EmpleadoParam(atoi(buffer[0]), buffer[1],buffer[2],atof(buffer[3]));

     // *(lista + cont) = *nuevoEmpleado;

      *(lista + cont) = nuevoEmpleado;
    cont++;

    pAuxEmpleado = (eEmpleado**) realloc(lista, sizeof(eEmpleado*) *(cont+1));
    if(pAuxEmpleado == NULL){
        exit(1);
    }
    lista = pAuxEmpleado;
              //printf(" %5d   %10s   %20s  %8.2f\n", atoi(buffer[0]), buffer[1], buffer[2], atof(buffer[3]));
    }

    mostrarEmpleados(lista, cont);



    fclose(f);

    /*if (listaParaImprimir(lista, cont, "ListaEmpleados.txt")==1)
    {
        printf("se ha impreso la lista\n");
    }
    else
    {
        printf("no se ha impreso la lista\n");
    }*/


    /*if (guardarEmpleadosCsv(lista, cont, "empleados2.csv")==1)
    {
        printf("se han guardado empleados en csv\n");
    }
    else
    {
        printf("no se han guardado empleados\n");
    }*/


    if (guardarEmpleadosbinario(lista, cont, "empleados"))
    {
        printf("se han guardado empleados en binario\n");
    }
    else
    {
        printf("no se han guardado emp en binario\n");
    }


    return 0;
}


void mostrarEmpleados(eEmpleado** lista, int len){

for(int i=0; i < len; i++){
    printf(" %5d   %10s   %20s  %8.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
}
printf("\n\n");

}


eEmpleado* new_Empleado(){

eEmpleado* emp = (eEmpleado*)malloc( sizeof(eEmpleado));

if(emp != NULL){
    emp->legajo = 0;
    strcpy(emp->nombre, "");
    strcpy(emp->apellido, "");
    emp->sueldo = 0;

}
return emp;
}

eEmpleado* new_EmpleadoParam( int leg, char* nombre, char* apellido, float sueldo){

eEmpleado* emp = (eEmpleado*)malloc( sizeof(eEmpleado));

if(emp != NULL){
    emp->legajo = leg;
    strcpy(emp->nombre, nombre);
    strcpy(emp->apellido, apellido);
    emp->sueldo = sueldo;

}
return emp;
}

int listaParaImprimir(eEmpleado** lista, int tam, char* path)
{
    int todoOk = 1;

    FILE* f = fopen(path, "w");

    if(f==NULL)
    {
        todoOk = 0;
    }
    fprintf(f, "Listado de Empleados\n\n");
    fprintf(f, "Legajo  Nombre  Apellido  Sueldo");


    for(int i=0; i < tam; i++)
    {
    fprintf(f," %5d   %10s   %20s  %8.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
    }

    printf("\n\n");
    return todoOk;
}
int guardarEmpleadosCsv(eEmpleado** lista, int tam, char* path)
{
    int todoOk = 1;
    char extension[] = ".csv";
    char nombreArchivo[100];
    strcpy(nombreArchivo, path);
    strcat(nombreArchivo, extension);

    FILE* f = fopen(nombreArchivo, "w");

    if(f==NULL)
    {
        todoOk = 0;
    }
    fprintf(f, "Listado de Empleados\n\n");
    fprintf(f, "Legajo  Nombre  Apellido  Sueldo");


    for(int i=0; i < tam; i++)
    {
    fprintf(f," %d,%s,%s,%.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
    }

    printf("\n\n");
    return todoOk;
}


int guardarEmpleadosbinario(eEmpleado** lista, int tam, char* path)
{
    int todoOk = 1;
    char extension[] = ".bin";
    char nombreArchivo[100];
    strcpy(nombreArchivo, path);
    strcat(nombreArchivo, extension);

    FILE* f = fopen(nombreArchivo, "wb");

    if(f==NULL)
    {
        todoOk = 0;
    }


    for(int i=0; i < tam; i++)
    {
    fwrite(*(lista+i) , sizeof(eEmpleado), 1, f);
    }
    fclose(f);

    printf("\n\n");
    return todoOk;
}
