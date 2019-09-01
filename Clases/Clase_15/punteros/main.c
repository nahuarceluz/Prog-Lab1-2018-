#include <stdio.h>
#include <stdlib.h>

void swap(int, int);

int main()
{
    /*int x = 5;

    printf("%d", &x); //muestra la direccion de memoria de x.
    return 0;
    */

    /*int x = 10;
    printf("%p",x); //muestra la direccion de memoria de x.
    */

    int a=2;
    int b=3;

    printf(swap(int a, int b));
    scanf("%d", a, b);



}

void swap(int*x, int*y)
{
    int aux;

    aux=*x;
    *x=*y;
    *y=aux;
}
