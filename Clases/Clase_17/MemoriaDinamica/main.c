#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;

    pNum = (int*)malloc(sizeof (int));

    if(pNum==NULL) //Por si la memoria está llena.
    {
        printf("Memoria llena. Programa finalizado");
        system("pause");
        exit(1); //Con exit(1) se termina el programa.
    }

    /* *pNum=5; //Para asignarle un valor.

    printf("%d\n", *pNum);*/

    printf("Ingrese un numero: "); //Pâra cargarle una variable a traves de un puntero.
    scanf("%d",pNum);
    printf("%d\n", *pNum);

    free(pNum); //Liberamos memoria.

    return 0;
}
