#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    int n1, n2, n3, n4;
    int cantidad;

    f = fopen("datos.txt", "r"); // r = modo lectura de un archivo TXT.

    if(f==NULL)
    {
        printf("Error. No se pudo abrir el archivo.");
        exit(1); //o exit(EXIT_FAILTURE);
    }
    while(!feof(f))
    {
        cantidad = fscanf(f, "%d, %d, %d, %d", &n1, &n2, &n3, &n4);

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

            printf("%d, %d, %d, %d\n", n1, n2, n3, n4);
    }

    fclose(f);

    return 0;
}
