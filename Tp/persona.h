typedef struct
{
    char nombre[21];
    int edad;
    int DNI;
    int flag;
    int isEmpty;
}ePersona;

int menu()
{
    int opcion;
    system("cls");
    printf("1-Agregar persona\n");
    printf("2-Borrar persona\n");
    printf("3-Imprimir lista ordenada por nombre\n");
    printf("Imprimir grafico por edades\n");
    printf("Opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

void inicializarPersona(ePersona vec[], int tam)
{
    int i;

    for(i=0; i< tam; i++)
    {
        vec[i].isEmpty =1;
    }
}

void mostrarPersona(ePersona vec[], int tam)
{
    int i;

    system("cls");
    printf("---Lista de personas por nombre---\n\n");
    printf("  Nombre    Edad    DNI \n\n");
    for(i=0; i< tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarPersona(vec[i]);
        }
    }
}

void mostrarPersonas(ePersona persona){
    printf(" %c     %d      %d  \n",persona.nombre, persona.edad, persona.DNI);
}

int buscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarPersona(ePersona vec[], int tam, int nombre)
{
    int estado = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].nombre == nombre)
        {
            estado = i;
            break;
        }
    }
    return estado;
}

void agregarPersona(ePersona vec[], int tam)
{

    ePersona nuevaPersona;
    int estado;
    int aux;
    int nombre;

    system("cls");
    printf("---Agregar persona---\n\n");

    estado = buscarLibre(vec, tam);

    if(estado == -1)
    {
        printf("\nLa lista esta completa. No se puede agregar a personas nuevas.\n\n");
    }
    else
    {
        printf("Ingrese nombre: ");
        scanf("%d", &nombre);

        aux = buscarPersona(vec, tam, nombre);

        if(aux != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", nombre);
                   mostrarPersona(vec[aux]);
        }
        else{
                   nuevaPersona.isEmpty = 0;
                   nuevaPersona.nombre = nombre;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevaPersona.nombre);

                   printf("Ingrese edad: ");
                   fflush(stdin);
                   scanf("%d", &nuevaPersona.edad);

                   printf("Ingrese DNI: ");
                   scanf("%d", &nuevaPersona.DNI);

                   vec[estado] = nuevaPersona;

                   printf("\ Persona agregada!!!\n\n");

           }
  }

}

void bajaEmpleado(ePersona vec[], int tam){
int legajo;
int esta;
char confirma;

system("cls");
printf("---Baja Empleado---\n\n");

   printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}
