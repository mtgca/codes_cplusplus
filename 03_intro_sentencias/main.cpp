// Main function of the C++ program.

/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
using namespace std;
#include <math.h>

/* Definir constantes */

/* Definir tipos de datos */
/* Los veremos mas adelante  */

/* Definir prototipos de nuestras funciones */
/* Los veremos mas adelante  */

/* Programa principal */
int main()
{
    /* Declarar e inicializar variables locales */
    int i;
    char carac;
    float base, altura, area;

    float x=3.14, y=2.3, rcos, rsen, res;

    /* Sentencias */

    // sentencias de asignacion
    cout << "Inicio" << endl;
    i = 0; /* Asigna a la variable i el valor 0 */
    carac = 'a'; /* Asigna a la variable carac el caracter 'a' */
    base = 4.0; /* Asigna a base el valor 4.0 */
    altura = 5.0/2; /* Asigna a la variable altura el valor 2.5 */
    area = base*altura; /* Asigna a la variable area el resultado de la expresion base*altura, que es 4.0 * 2.5 = 10.0 */
    
    cout << "Area = " << area << endl;

    // sentencia para llamar a funcion
    /* Llamada a la funcion cosf, que calcula el 
    coseno de x (en radianes). El resultado (-1.0)
    quedara almacenado en la variable rcos */
    rcos = cosf(x); 
    cout << "cos(x) = " << rcos << endl;

    /* Llamada a la funcion sinf, que calcula el
    seno de x/2 (en radianes). El resultado (1.0) 
    quedara almacenado en la variable rsen */
    rsen = sinf(x/2); 
    cout << "sin(x/2) = " << rsen << endl;

    /* Llamada a la funcion sqrtf, que calcula 
    la raiz cuadrada de x*x+y*y. 
    El resultado (3.89) quedara almacenado en la variable res */
    res = sqrtf(x*x + y*y); 
    cout << "La raiz cuadrada de x*x+y*y = " << res << endl;

    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */