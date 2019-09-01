#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[3];
    int edad;
}ePersona;


int main()
{
    ePersona pers[3];
    ePersona *punteroPersona;
    punteroPersona = pers;


    int i;
    for(i=0; i<3; i++)
    {
    printf("Ingrese nombre: ");
    scanf("%s",(*punteroPersona).nombre);

    printf("Ingrese edad: ");
    scanf("%d",&(*punteroPersona).edad);
    }

    for(i=0; i<3; i++)
    {
        printf("%s",&per.nombre);
        printf("%d",pers.edad);
    }


}
