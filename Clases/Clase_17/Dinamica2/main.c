#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    //int vec1[5]; //vector memoria estatica.

    int* vec;
    vec = (int*)malloc(TAM*sizeof(int)); //Vector memoria dinamica
    //calloc: Nos muestra cincos 0.
    //vec = (int*)calloc(TAM, sizeof(int)); //Sirve con entero, flotante, para elementos numeros.

    if(vec==NULL)
    {
        printf("Memoria llena.\n");
        system("pause");
        exit(1);
    }

    for(int i=0; i<TAM; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", vec + i); //Cuando usamos "CALLOC" este for lo cancelamos.
    }
    for(int i=0; i<TAM; i++)
    {
        printf(" %d",*(vec+i));
    }

    free(vec);

    return 0;
}
