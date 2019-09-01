#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct alumno
    {
    char nombre[20];
    int edad;
    };


    struct alumno auxiliarAlumno;
    struct alumno *punteroAlumno;
    punteroAlumno = &auxiliarAlumno;

    printf("Ingrese nombre: ");
    scanf("s",(*punteroAlumno).nombre);

    printf("Ingrese edad: ");
    scanf("%d",&(*punteroAlumno).edad);



}
