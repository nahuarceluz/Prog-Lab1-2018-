#include <stdio.h>
#include <stdlib.h>

/*int main()
{        int i, fact=1,a;
        printf("Ingrese numero: ");
        scanf("%d",&a);
        for(i=1; i<=a; i++)
            fact=fact*i;
        printf("El factorial de %d es %d",a,fact);


}*/

    /*int main()
    {
        int fact(int a)
        {
            int i, fact=1;
            printf("Ingrese: ");
            scanf("%d",&a);
            for(i=1; i<=a; i++)
                fact=fact*i;
            printf("El factorial de %d es %d");
        }
    }*/


#include <stdio.h>
int factorial(int a);
int main()
{
    int a,resultado;
    printf("\nIngrese numero: ");
    scanf("%d",&a);



    resultado=factorial(a);
        printf("El factorial de %d es %d!",a,resultado);

}

int factorial(int a)
{
    int respuesta;
    if(a==1)
        return 1;
    respuesta=a*factorial(a-1);
    return (respuesta);

}










