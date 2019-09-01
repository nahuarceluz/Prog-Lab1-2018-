#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    f = fopen("probando.html","w"); // f=fopen ("nombre del archivo", "modo");
    if(f==NULL)
    {

        printf("Error. El archivo no pudo ser creado");
        system("pause");
        exit(1);
    }

    fprintf(f, "Hola, estoy programano en C..");
    fclose(f);
}




