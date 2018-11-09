//#include "Serie.h"
//#include "Usuario.h"
#include "series-usuarios.h"

int main()
{

    /***LISTAS***/
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    /***VARIABLES DE CONTROL DE ESTADO Y DECISION***/
    ///int flag=0;
    char op='\0';

    /***INICIALIZACION DE LISTAS***/
    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/

    /**if(flag==0 && (op=='1' || op=='2' || op=='3' || op=='4'){
        printf("Error. No hay nada cargado.\n\n");
        continue;
        }**/

    do{
        printf("1. Mostrar el listado de series.\n2. Mostrar el listado de usuarios.\n");
        printf("3. Mostrar el listado de usuarios con el nombre de la serie que ve.\n");
        printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven.\n\nIngrese opcion: ");
        scanf("%c",&op);
        fflush(stdin);

        switch(op){
            case '1':
                mostrarListaSeries(listaDeSeries,TAMSERIE);
                break;
            case '2':

                break;
            case '3':
                break;
            case '4':
                break;
            default:
                if(op=='5')
                    break;
                else
                    printf("Error. La opcion ingresada no pertenece al menu.\n\n");
        }
    }while(op!='5');


    return 0;
}
