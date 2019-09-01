#include <stdio.h>
#include <stdlib.h>
#define CANT 2

typedef struct
{
    int dia, mes, anio;
}eFecha;
typedef struct
{
    char nombre[21];
    int legajo;
    float salario;
    char sexo;
    eFecha fn; //Fecha de Nacimiento
}eEmpleado;

/*int main()
{
    eEmpleado emp;

    emp.nombre
    emp.legajo
    emp.fn.dia
    emp.fn.mes
}*/ //A nivel dato.

int main()
{
    eEmpleado emp[CANT], aux;
    int i,j;
    for(i=0; i<CANT-1; i++)
    {
        for(j=0; j<CANT; j++)
        {
            if(emp[i].salario<emp[j].salario)
            {
                aux=emp[i];
                emp[i]=emp[j]; //Forma correcta
                emp[j]=aux;
            }
            else                    //Si al "else" no le ponemos "{}" se ejecuta la primera linea//
            {
                if(emp[i].salario==emp[j].salario)
                {
                    if(strcmp(emp[i].nombre,emp[j].nombre)>0)
                        {
                            aux=emp[i];
                            emp[i]=emp[j];
                            emp[j]=aux;
                        }
                }
            }

         }

     }


}
