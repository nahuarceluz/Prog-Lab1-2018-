#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char marca[50];
    char modelo[50];
    char color[50];
    int anio;
    int estado;
}eAuto;

int main()
{
    FILE* f;

    char marca[40];
    char modelo[40];
    char color[49];
    int id;
    int anio;
    int cantidad;
    char anioCad[20];
    char idCad[20];

    f = fopen("autos.csv", "r"); // r = modo lectura de un archivo TXT.

    if(f==NULL)
    {
        printf("Error. No se pudo abrir el archivo.");
        exit(1); //o exit(EXIT_FAILTURE);
    }
    while(!feof(f))
    {
        cantidad = fscanf(f, " %[^,] , %[^,] , %[^,] , %[^,], \n", &idCad, marca, modelo, color, &anio);

        if(cantidad != 4) //Sin este IF lo muestra igual.
        {
            if(feof(f))
            {
                break;
            }
            else
            {
                printf("No se pudo leer el archivo.");
                exit(EXIT_FAILURE);
            }
        }

            id = atoi(idCad);
            anio = atoi(anioCad);

            printf(" %4d %15s %16s %15s %4d\n", eAuto.id, eAuto.marca, eAuto.modelo, eAuto.color, eAuto.anio);
    }

    fclose(f);

    return 0;
}
