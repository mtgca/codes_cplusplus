
/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
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
    int dato;
    int edad;
    float sueldo;
    char sexo;
    string nombre;
    int entero;

    /* Sentencias */
    // leer un dato
    cout << "Ingrese un dato: ";
    cin >> dato;
    cout << "Dato ingresado: " << dato << endl; //endl da un salto de linea
    
    // leer más de un dato
    cout << "Introduzca sexo(f,m) edad y sueldo: ";
    cin >> sexo >> edad >> sueldo;
    cout << "sexo: " << sexo << endl;
    cout << "edad: " << edad << endl;
    cout << "sueldo: " << sueldo << endl;
    /* Lee desde el teclado un caracter que indica el sexo (f o m) y
    lo guarda en la variable sexo, a continuacion lee un valorz
    entero y lo guarda en la variable edad. Luego, lee un valor
    real y lo guarda en la variable sueldo */

    //leer strings
    cout << "Ingrese un entero: ";
    cin >> entero;
    cout << "Entero = " << entero << endl;
    
    cout << "Ingrese un nombre y apellido (lectura con cin): ";
    cin >> nombre; // cin no puede leer espacios en blanco
    cout << "Nombre ingresado con cin: " << nombre << endl;
    
    cout << "Ingrese un nombre y apellido (lectura con getline): ";
    cin.ignore(); // necesario porque se ha usado cin antes de getline
    getline(cin, nombre);
    cout << "Nombre ingresado: " << nombre << endl;


    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */
