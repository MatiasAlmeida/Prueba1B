#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMSERIE 20
#define CHARSIZE 50

typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);
