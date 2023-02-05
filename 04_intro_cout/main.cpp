
/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
#include <iomanip> // manipuladores setw, setprecision
using namespace std;


/* Definir constantes */
/* Los veremos mas adelante  */

/* Definir tipos de datos */
/* Los veremos mas adelante  */

/* Definir prototipos de nuestras funciones */
/* Los veremos mas adelante  */

/* Programa principal */
int main()
{
    /* Declarar e inicializar variables locales */
    int a=3, b;
    float base=3.419, altura=2.123, area;
    char rectan='r';
    
    /* Sentencias */
    //mostrar mensajes por pantalla
    cout << "Mostrar mensajes por pantalla" << endl;
    cout << "Hello World!" << endl; //endl da un salto de linea
    cout << "Hola \n\n"; // \n secuencia de escape o caracter de control
   
    // mostrar valores de variables
    cout << "Mostrar valores de variables" << endl;
    b = a + 1;
    cout << a << " + " << b << " = " << a + b << endl << endl;

    // modificadores de formato: 
    // No olvidar incluir libreria <iomanip> 
    cout << "Mdificadores de formato" << endl;
    area = base*altura;

    /* Muestra por pantalla:
     El area de r = 3.42*2.12 = 7.259 y salta una linea */
    cout << "El area de "<< rectan << " = " 
    << setprecision(3) << base << "*" 
    << setprecision(3) << altura << " = " 
    << setprecision(4) << area << endl;

    /* Muestra: El area de r =   3.42  *  2.12 =   7.26*/
    cout << "El area de "<< rectan << " = " 
    << setw(6) << setprecision(3) << base 
    << setw(3) << "*" 
    << setw(6) << setprecision(3) << altura 
    << setw(6) << " = " 
    <<  setw(6) << setprecision(3) << area << endl;

    cout << "Con fixed: "
    << fixed << setprecision(6) << base << endl;
    cout << "Sin fixed (defaultfloat remueve el efecto de fixed): "
    << defaultfloat << setprecision(6) << base << endl;
    //rellena de * hasta un ancho de 20. 
    //De forma predeterminada el texto se alinea a la derecha
    cout << setw(20) << setfill('*') << "Derecha" << endl;

     //rellena de . hasta un ancho de 20 y alinea a la izquierda
    cout << setw(20) << setfill('.') << left << "Izq" << endl;

    //alinea a la izquierda sin relleno.
    cout << left << "Sin relleno" << endl << endl;

     // mas detalles en https://cplusplus.com/reference/iomanip/
    // mas detalles https://cplusplus.com/reference/ios/ 

    // secuencias de escape
    cout << "Secuencias de escape \n";
    cout << "Tab -> \t" << "<-Tab" << endl;
    cout << "Comilla doble \"a\"" << endl;
    cout << "Barra inclinada \\" << endl;
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */
