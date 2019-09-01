#include <stdio.h>
#include <stdlib.h>

void ordenar(int[],int);
void mostrarVector(int[], int);

int main()
{
    int x[]={34, 12, 39, 600, 3};
    ordenar(x,5);
    mostrarVector(x,5);

    return 0;
}

void ordenar(int vec[],int tam)
{
    int aux;
    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(vec[i]<vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }

}

void mostrarVector(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d",vec[i]);
    }
printf("\n\n");
}
