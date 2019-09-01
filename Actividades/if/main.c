#include <stdio.h>
#include <stdlib.h>

int division(int a, int b);

int main()
{
    int a;
    int b;
    int resultado;


    printf("Ingrese un numero: ");
    scanf("%d",&a);
    printf("Ingrese un numero: ");
    scanf("%d",&b);
    int division(int a, int b);
    if(b==0)
    {
        printf("error! ingrese otro numero",b);
    }
    else
    {
        printf("El rta de la divicion es: %d\n",resultado);
    }


}


int division(int a, int b)
{
    int resultado;
    resultado=a/b;
    return resultado;
}
