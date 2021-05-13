#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void hardcorecontribuyenes(eContribuyente contribuyente[],int cant)
{
    int cuil[5] = {2670148952,4503971542,4501230785,6503500489,1035071823};
    char nombre[5][51] = {"Cristian","Matias","Noelia","Alicia","Jorge"};
    char apellido[5][51] = {"Gonzalez","Asel","Anabel","Peres","Lopez"};
    int IsEmpty[5] = {1,1,1,1,1};
    int idContribuyente[5] = {1000,1001,1002,1003,1004};

    for(int i=0; i<5; i++)
    {
        contribueyente[i].id = idContribuyente[i];
        strcpy(contribueyente[i].nombre,nombre[i]);
        strcpy(contribueyente[i].apellido,apellido[i]);
        contribueyente[i].sector = cuil[i];
        contribueyente[i].isEmpty = isEmpty[i];
    }
}


void imprimirContribuyente (eContribuyente contribuyente[])
{
    if(contribuyente.isEmpty == 1)
       {
          printf("%d || %10s %15s %20f\n\n", contribuyente.idContribuyente, contribuyente.nombre, contribuyente.apellido, contribuyente.cuil);

       }
}

void imprimirTodosContribuyente (eContribuyente contribuyente[], int TAM)
{
    for(int i=0; i < TAM; i++)
    {
        imprimirContribuyente(contribuyente[i]);
    }
}


int modificacionDeEmpleado(eContribuyente contribuyente[], int len)
{
    int id;
    int indice;
    int rt;

    int retorno=-2;

    char auxiliarID[20];

    if(len > 0 && contribueyente != NULL)
    {
        retorno=-1;

        imprimirContribuyente(contribueyente, len);

        printf("Ingrese el ID del empleado: ");
        fflush(stdin);
        gets(auxiliarID);
        while(esNumerico(auxiliarID)==0)
        {
            printf("Error, ID incorrecta, ingrese nuevamente ");
            fflush(stdin);
            gets(auxiliarID);
        }
        id=atoi(auxiliarID);

        indice=findEmployeeById(contribueyente, len, id);


        if(indice>=0)
        {
            rt=menuModificacion(contribueyente,indice);
            retorno=rt;
        }
        else
        {
            retorno = -2;
        }
    }
    return retorno;
}






int menuModificacion(eContribuyente contribuyente[], int indice)
{
    char auxiliarNombre[30];
    char auxiliarApellido[30];
    char auxiliarcuit[30];
    int opcion;


    int retorno=-1;


    printf("\nQue desea modificar:\n1- Nombre\n2- Apellido\n3- Cuil\n\n");
    printf("Ingrese una opcion: ");
    fflush(stdin);
    gets(auxiliarOpcion);


    while(esNumerico(auxiliarOpcion)==0)
    {
        printf("Error, Ingrese nuevamente la opcion ");
        fflush(stdin);
        gets(auxiliarOpcion);
    }
    opcion=atoi(auxiliarOpcion);  //Convierte la cadena a su valor numerico



    if(opcion>=1&&opcion<=3)
    {
        switch(opcion)
        {
        case 1:
            printf("Ingrese el nuevo nombre del empleado:");
            fflush(stdin);
            gets(auxiliarNombre);
            while(esSoloLetras(auxiliarNombre)==0)
            {
                printf("Error, Ingrese un tipo de nombre correcto ");
                fflush(stdin);
                gets(auxiliarNombre);
            }

            strcpy(contribueyente[indice].nombre, auxiliarNombre);
            printf("\nEmpleado modificado con exito!\n");
            retorno=indice;
            break;

        case 2:
            printf("Ingrese el nuevo apellido del empleado:");
            fflush(stdin);
            gets(auxiliarApellido);
            while(esSoloLetras(auxiliarApellido)==0)
            {
                printf("Error, Ingrese un tipo de apellido correcto ");
                fflush(stdin);
                gets(auxiliarApellido);
            }

            strcpy(contribueyente[indice].apellido, auxiliarApellido);
            printf("\nEmpleado modificado con exito!\n");
            retorno=indice;
            break;

        case 3:
            printf("Ingrese el nuevo cuit del empleado:");
            fflush(stdin);
            gets(auxiliarCuit);
            while(esNumerico(auxiliarcuit)==0)
            {
                printf("Error, ingrese un sector correcto ");
                fflush(stdin);
                gets(auxiliarSector);
            }
            sector = atoi(auxiliarcuit);
            contribueyente[indice].cuil = sector;
            printf("\nCuil modificado con exito!\n");
            retorno=indice;
            break;

        default:
            retorno = -3;
            break;
        }
    }
    else
    {
        retorno = -3;
    }

    return retorno;
}




