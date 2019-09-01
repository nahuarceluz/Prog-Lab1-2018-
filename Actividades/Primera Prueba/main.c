#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int rta;

    a=2;
    b=3;
    c=4;
    d=5;
    e=6;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&c);
    printf("Ingrese el quinto numero: ");
    scanf("%d",&d);
    printf("Ingrese el sexto numero: ");
    scanf("%d",&e);

    rta=a+b-c*d/e;
    return rta;

    printf("La cuenta es de: %d",a,b,c,d,e);
}
