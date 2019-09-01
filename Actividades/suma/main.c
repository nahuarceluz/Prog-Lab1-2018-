#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int rta;

    num1=3;
    num2=3;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    rta=num1-num2;
    printf("La suma da: %d",rta);
    return 0;
}
