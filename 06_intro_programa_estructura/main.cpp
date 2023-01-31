//DIRECTIVAS DEL PREPROCESADOR
#include <iostream> /* Incluir librerias */
using namespace std;
#define PI 3.14 /* Definir constantes (OPCIONAL)*/

/* Definir tipos de datos (OPCIONAL)*/

/* Definir prototipos de nuestras funciones (OPCIONAL)*/

int main()//FUNCION PRINCIPAL, OBLIGATORIA. Puede omitirse int.
{
    int variable_local = 10; /* Declarar variables locales */
        
    /* Sentencias */
    cout << "Constante PI = " << PI << endl; //Sentencias termina en ;
    cout << "Variable local = " << variable_local << endl;

    return 0; //valor de retorno. No es necesario si se declara main() sin int.
    
    /* Esto es un comentario */
    
    // Esto es otro comentario
    
    /* Este comentario es muy largo
    y ocupa mas de una linea */
}

/* Definir funciones (OPCIONAL)*/
