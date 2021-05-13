#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Parcial.h"
#include "FuncionesGet.h"

#define MAX 1000

int main()
{
    char opcion;

    eContribuyente contribueyente[MAX];
    ePublicidad  publicidad[MAX];

        system("cls");
        printf("BIENVENIDO!\n\n");
        printf("1 - ALTA DE CONTRIBUYENTE\n");
        printf("2 - MODIFICAR DATOS \n");
        printf("3 - BAJA CONTRIBUYENTE\n");
        printf("4 - RECAUDACION\n");
        printf("5 - REFINANCIAR\n");
        printf("6 - SALIR\n");

        printf("Debe elegir una opcion a realizar: ");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
            case '1':
                hardcorecontribuyenes(contribueyente, MAX);
                break;
            case '2':
                modificacionDeEmpleado(modificacionDeEmpleado, MAX);
                break;
            case '3':


        }
}
