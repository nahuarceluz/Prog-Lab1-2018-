#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
   int num1;
   int num2;
   int rta;


   printf("Ingrese el primer numero: ");
   scanf("%d",&num1);
   printf("Ingrese el segundo numero: ");
   scanf("%d",&num2);

   rta=suma(num1, num2);
   printf("La suma da: %d",rta);


}
