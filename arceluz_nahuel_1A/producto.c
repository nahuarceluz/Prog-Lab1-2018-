#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i;

typedef struct
{
    char provedorUno;
    char provedorDos;
    char provedorTres;
}eProvedores;

typedef struct
{
    char descripcion[31];
    int importe;
    int cantidad;
    int cantidadMenorOIgualADiez;
    int cantidadMayorADiez;
    int isEmpty;
}eProductos;

int menu()
{
    int opcion;

    system("cls");
    printf("--PRODUCTOS--\n\n");
    printf("1-Alta\n");
    printf("2-Modificar\n");
    printf("3-Baja\n");
    printf("4-Informar\n");
    printf("5-Listar\n");
    printf("6-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarProducto(eProductos vec[], int TAM )
{

    for(int i=0; i< TAM; i++)
    {
        vec[i].isEmpty =1;
    }
}

void mostrarProductos(eProductos vec[], int TAM)
{
    system("cls");
    printf("--LISTA DE PRODUCTOS--\n\n");
    printf("Cantidad  Importe  Descripcion   Cantidad<=10      Cantidad>10   \n");
    for(i=0; i< TAM; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarProducto(vec[i]);
        }
    }
}

void mostrarProducto(eProductos prod)
{
    printf("%d         %d        %s              %d             %d\n",prod.cantidad, prod.importe, prod.descripcion,prod.cantidadMenorOIgualADiez,prod.cantidadMayorADiez);
}

int buscarLibre(eProductos vec[], int TAM)
{
    int indice = -1;
    for(i=0; i < TAM; i++)
    {
        if(vec[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarProducto(eProductos vec[], int TAM, int cantidad)
{
    int indice = -1;
    for(i=0; i < TAM; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].cantidad == cantidad)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void altaProducto(eProductos vec[], int TAM)
{

    eProductos nuevoProducto;
    int indice;
    int aux;
    int cantidad;

    system("cls");
    printf("--REGISTRAR PRODUCTO--\n\n");

    indice = buscarLibre(vec, TAM);

    if(indice == -1)
    {
        printf("\nEl sistema aux completo. No se puede registrar nuevos productos.\n\n");
    }
    else
    {
        printf("Ingrese Cantidad: ");
        fflush(stdin);
        scanf("%d", &cantidad);

        aux = buscarProducto(vec, TAM, cantidad);

        if(aux != -1)
        {
            printf("\nEl producto %d ya se ha registrado en el sistema\n", cantidad);
                   mostrarProducto(vec[aux]);
        }
        else{
                   nuevoProducto.isEmpty = 0;
                   nuevoProducto.cantidad = cantidad;

                   printf("Ingrese Importe: ");
                   fflush(stdin);
                   scanf("%d",&nuevoProducto.importe);

                   printf("Ingrese Descripcion: ");
                   fflush(stdin);
                   scanf("%s",&nuevoProducto.descripcion);

                   vec[indice] = nuevoProducto;


                   printf("\nAlta exitosa!\n\n");

           }
  }

}

void bajaProducto(eProductos vec[], int TAM)
{
    int indice;
    int aux;
    int cantidad;
    int confirma;

system("cls");
printf("--BAJA DE PRODUCTO--\n\n");

   printf("Ingrese Cantidad: ");
        scanf("%d", &cantidad);

        aux = buscarProducto(vec, TAM, cantidad);

        if(aux == -1)
        {
            printf("\nEl producto %d no se encuentra en el sistema\n\n", cantidad);

        }
        else{

                mostrarProducto(vec[aux]);

        printf("\nConfirma baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's'){
            vec[aux].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}

void productosMenorOIgualADiez(eProductos vec[], int TAM)
{
    int productos;
    int i;
    for(i=0; i<TAM; i++)
    {
        if(productos<=10)
        {
            mostrarProducto(vec[i]);
        }
    }

}

void productosMayorADiez(eProductos vec[], int TAM)
{
    int productos;
    int i;
    for(i=0; i<TAM; i++)
    {
        if(productos>10)
        {
            mostrarProducto(vec[i]);
        }
    }
}










