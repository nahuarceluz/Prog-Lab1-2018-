#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    int estado;
}eEmpleado;

int main()
{
    eEmpleado* pe
}

eEmpleado* new_Empleado()
{
    eEmpleado* nuevoEmpleado;
    nuevoEmpleado = (eEmpleado*)malloc(sizeof(eEmpleado));
    if(nuevoEmpleado != NULL)
    {
        nuevoEmpleado->legajo=0;
        strcpy(nuevoEmpleado->nombre, "");
        nuevoEmpleado->sueldo=0;
        nuevoEmpleado->estado=0;
    }
    return nuevoEmpleado;
}

eEmpleado* new_Empleado_Param(int legajo, char* nombre, float sueldo)
{
    eEmpleado* nuevoEmpleado;
    nuevoEmpleado=new_Empleado();
    if(nuevoEmpleado != NULL)
    {
       nuevoEmpleado->legajo = legajo; //paso lo que tengo, = lo que le asigno a la funcion.
        strcpy(nuevoEmpleado-> nombre, nombre);
        nuevoEmpleado->sueldo = sueldo;
        nuevoEmpleado->estado = 1;  //Estaba en 0, ahora en 1 porque se activa.
    }
}
void mostrarEmpleado(eEmpleado* empleado)
{
    if(empleado != NULL)
    {
        printf("%d %s %.2f\n", empleado->legajo, empleado->nombre, empleado->sueldo);
    }
}

void mostrarEmpleados(eEmpleado* empleados, int tam)
{
    if(empleados != NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            if((empleados + 1)->estado)
            {
                mostrarEmpleado(empleados + i);
            }
        }
    }
}
void inicializarEmpleados(eEmpleado* empleados, int tam)
{
    if(empleados !=NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            (empleados+i)->estado = 0;
        }
    }

}

eEmpleado* new_ArrayEmpleados(int tam)
{
    eEmpleado* array;
    if(tam >0)
    {
        array = (eEmpleado*)malloc(tam* sizeof(eEmpleado));
        if(array != NULL)
        {
            inicializarEmpleados(array, tam);
        }
    }

    return array;
}

