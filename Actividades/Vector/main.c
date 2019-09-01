#include <stdio.h>
#include <stdlib.h>
#define CANT 4
int main()
{
   int vector[CANT];
   int i;

   for(i=0; i<CANT; i++)
   {
       printf("Ingrese un vector: ");
       scanf("%d",&vector[i]);
       printf("Los vectores son: %d\n",vector[CANT]);
   }
}
