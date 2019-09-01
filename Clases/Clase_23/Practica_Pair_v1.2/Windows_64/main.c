#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int salir = 1;
    do
    {
        switch(menu())
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        }
    }while(salir!= 1);
    return 0;
}

int menu()
{
        int opcion;

        printf("Menu de Opciones\n\n");
        printf("1. Parse del archivo data.csv\n");
        printf("2. Listar Empleados\n");
        printf("3. Ordenar por nombre\n");
        printf("4. Agregar un elemento\n");
        printf("5. Elimina un elemento\n");
        printf("6. Listar Empleados (Desde/Hasta)\n\n");

        printf("Ingrese una opcion: ", opcion);
        scanf("%d", &opcion);
}
