#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

#define TAM 5

int main()
{
    int salir=0;
    eProductos pro[TAM];

    inicializarProducto(pro, TAM);

    do
    {
        switch(menu())
        {
      case 1:
          altaProducto(pro, TAM);
          system("pause");
        break;
      case 2:
        break;
      case 3:
            bajaProducto(pro, TAM);
            system("pause");
        break;
      case 4:
        break;
      case 5:
          mostrarProductos(pro, TAM);
          system("pause");
        break;
      case 6:
        salir=1;
        break;
        }
    }
    while(salir!=1);
}

