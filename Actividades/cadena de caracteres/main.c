#include <stdio.h>
#include <stdlib.h>
#define CANT 2

int main()
{
    int legajo[CANT];
    int nombre[CANT][2];
    int i;
    float salario[CANT];
    for(i=0; i<CANT; i++)
    {
        printf("Ingrese Legajo: ");
        scanf("%d",&legajo[i]);
        printf("Ingrese Nombre: ");
        fflush(stdin);
        scanf("%d",&nombre[i]);
        fflush(stdin);
        printf("Ingrese Salario: ");
        scanf("%f",&salario[i]);
        fflush(stdin);
    }
        return 0;
}
