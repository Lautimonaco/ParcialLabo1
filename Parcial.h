#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int idContribuyente;
    char nombre[];
    char apellido[];
    int cuil;
    int isEmpty;
}eContribuyente;


typedef struct
{
    int idContribuyente;
    int mes;
    int tipo;
    float importe;
    int IdRecaudacion;
    int isEmpty;
}ePublicidad;


typedef struct
{
    int id;
    int idContri;
    int mes;
    char tipo[];
    int importe;
}eRecaudacion;



void hardcorecontribuyenes(eContribuyente contribuyentes[],int cant);

void imprimirContribuyente (eContribuyente contribuyente[]);

void imprimirTodosContribuyente (eContribuyente contribuyente[], int TAM);



