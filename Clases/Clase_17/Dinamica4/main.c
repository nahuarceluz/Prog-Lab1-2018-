#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado*);
eEmpleado newEmpleado ();

int main()
{
    eEmpleado* unEmpleado;
    unEmpleado = newEmpleado();

    if(unEmpleado == NULL)
    {
        printf("Memoria llena.\n");
        exit(1);
    }

    unEmpleado->legajo = 1234;
    strcpy(unEmpleado->nombre, "Juan");
    unEmpleado->sueldo = 10000;

    mostrarEmpleado(unEmpleado);

    return 0;

}

void mostrarEmpleado(eEmpleado* emp)
{
    printf("%d    %s  %2.f\n",emp->legajo, emp->nombre, emp->sueldo);
}

eEmpleado newEmpleado ()
{
    eEmpleado = puntero;

    puntero =(eEmpleado*)malloc(sizeof(eEmpleado)); //Consigue un espacio en la memoria para un empleado.
    if(puntero != NULL)
    {
        puntero->legajo = 0;
        strcpy(puntero->nombre, "");
        puntero->sueldo = 0;
    }

    return puntero;
}

eEmpleado newEmpleadoParam (int legajo, char* nombre, float sueldo);
{
    eEmpleado = puntero;

    puntero =(eEmpleado*)malloc(sizeof(eEmpleado)); //Consigue un espacio en la memoria para un empleado.
    if(puntero != NULL)
    {
        puntero->legajo = 0;
        strcpy(puntero->nombre, "");
        puntero->sueldo = 0;
    }
