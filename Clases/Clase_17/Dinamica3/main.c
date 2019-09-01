#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int* vec;
    int* aux;
    vec = (int*)malloc(TAM*sizeof(int)); //Vector memoria dinamica. Muestra 5(TAM)
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

    aux = realloc(vec, 10*sizeof(int));
    if(aux==NULL)
    {
        printf("Memoria llena.\n");
        system("pause");
        exit(1);
    }
    else
    {
        vec=aux;

    for(int i=5; i<(TAM+5); i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", vec + i);
    }
    for(int i=0; i<(TAM+5); i++)
    {
        printf(" %d",*(vec+i));
    }
    }

    vec = (int*)realloc(vec, TAM * sizeof(int));//Para achicar.
    for(int i=0; i<TAM; i++)
    {
        printf(" %d", *(vec+i)  );
    }

    printf("\n\n");


    free(vec);
    return 0;
}
