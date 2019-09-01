#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char provedorUno;
    char provedorDos;
    char provedorTres;
}eProvedores;

typedef struct
{
    char descripcion;
    int importe;
    int cantidad;
    int isEmpty;
}eProductos;

int menu();

void inicializarProducto(eProductos[], int);

void mostrarProductos(eProductos[], int);

void mostrarProducto(eProductos);

int buscarLibre(eProductos[], int);

int buscarProducto(eProductos[], int, int);

void altaProducto(eProductos[], int);

void bajaProducto(eProductos[], int);

void modificaProducto(eProductos[], int);



#endif // PRODUCTO_H_INCLUDEDtypedef struct
