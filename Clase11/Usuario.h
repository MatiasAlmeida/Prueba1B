#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMUSUARIO 100
#define CHARSIZE 50

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);

