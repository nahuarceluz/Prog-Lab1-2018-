#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int suma(int a, int b);

int main()
{
    int a;
    int b;
    int rta;

    a=5;
    b=4;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    rta=a+b;
    printf("La suma es de: %d",rta);
}


int suma(int a, int b)
{
    int respuesta;
    respuesta=a+b;
    return respuesta;
}
