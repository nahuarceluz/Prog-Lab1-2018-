#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int edad;
    char sexo;
    float promedio;
    int acumuladorNotas=0;
    int notaBaja;
    char sexoBajo;
    int contVaronesMas18=0;
    int minEdad;
    char minSexo;
    int minNota;
    int contMujer;
    int edadPrimeraMujer;
    int notaPrimeraMujer;
    int flag=0;

    for(int i=0; i<5; i++);
    {
        printf("Ingrese nota: ");
        scanf("%d",&nota);
        while(nota<0||nota>10)
        {
            printf("Nota invalida. Reingrese nota: ");
            scanf("%d",&nota);
        }
        printf("Ingrese edad: ");
        scanf("%d",&edad);
        while(edad<=0)
        {
            printf("Edad invalida. Reingrese edad: ");
            scanf("%d",&edad);
        }
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&sexo);
        sexo=tolower(sexo);
        while(sexo!='f'|| sexo!='m');
        {
            printf("sexo invalido. Reingrese sexo: ");
            scanf("%d",&sexo);
            sexo=tolower(sexo);
        }

            acumuladorNotas= acumuladorNotas+nota;
            if(nota<notaBaja||flag==0)
            {
                notaBaja=nota;
                sexoBajo=sexo;
            }
            if(edad<minEdad)
            {
                minEdad=edad;
                minSexo=sexo;
                minNota=nota;
                flag=1;
            }
            if(sexo=='m'&&edad<18==nota<=6)
            {
                contVaronesMas18++;
            }
            if(sexo=='f'&&contMujer==0)
            {
                notaPrimeraMujer=nota;
                edadPrimeraMujer=edad;
                contMujer++;
            }
            promedio=(float)acumuladorNotas/5;

            printf("\n\nResultados\n\n");
            printf("a-Promedio de notas: %.2f\n",promedio);
            printf("b-Nota mas baja: %d Sexo: %c\n",notaBaja,sexoBajo;
            printf("c-Cantidad de varones >18 y nota <=a6: %d\n",contVaronesMas18);
            printf("d-Edad mas joven_ %d Sexo: %c Nota: %d\n",minEdad,minSexo,minNota);

            if(contMujer==0)
                {
                    printf("No as ingresado ninguna mujer\n")
                }
                else
                {
                    printf("e-Datos de la primera mujer ingresada: Nota: %d Edad: %d\n\n",notaPrimeraMujer,edadPrimeraMujer);
                }
    }
}
