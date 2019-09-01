#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;

    char marca[50];
    char modelo[50];
    char color[50];
    int id;
    int anio;
    int cantidad;
    char anioCad[50];
    char idCad[50];

    f = fopen("autos.csv", "r"); // r = modo lectura de un archivo TXT.

    if(f==NULL)
    {
        printf("Error. No se pudo abrir el archivo.");
        exit(1); //o exit(EXIT_FAILTURE);
    }
    while(!feof(f))
    {
        cantidad = fscanf(f, " %[^,], %[^,] , %[^,] , %[^,] ,\n", &idCad, marca, modelo, color, &anioCad);

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

            anio = atoi(anioCad);
            id = atoi(idCad); //idCad pasa a tipo entero (atoi)


            printf(" %4d %20s %21s %20s %4d\n", id, marca, modelo, color, anio);
            // "%4d" - entero con 4 espacios.
            // "%20s" - texto con 20 caracteres.
    }

    fclose(f);

    return 0;
}


