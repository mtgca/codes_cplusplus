

/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
using namespace std;

/* Definir constantes */
#define FALSO 0 /* Define la constante entera  FALSO con  0 */
#define FLAG true /* Define la constante entera  FALSO con  0 */
#define PI 3.141516/* Define la constante real PI con 3.141516 */
#define HEX_10 0xA /* Define la constante hexadecimal HEX_10 con 0xA */
#define BIN_3 0b011 /* Define la constante binaria BIN_3 con 0b11*/
#define VERDAD 'S' /* Define la constante VERDAD 'S' */
#define CIUDAD "Quito" /* Define la constante CIUDAD "Quito" */
#define CIUDAD "Quito" /* Define la constante CIUDAD "Quito" */

/* Definir tipos de datos */
/* Los veremos mas adelante  */

/* Definir prototipos de nuestras funciones */
/* Los veremos mas adelante  */

/* Programa principal */
int main()
{
    /* Declarar e inicializar variables locales */
    int f, s=1; /* Declara las variables enteras f y s.  Se inicializa s en 0 */
    float area=0.0, raiz; /* Declara las variables reales area y raiz. Se inicializa area en 0.0 */
    char sexo='f'; /*Declara la variable sexo de tipo caracter y la inicializa en 'f' */
    string nombre = "Nicolas";
    bool positivo = (s > 0); // s es mayor que cero?
    
    /* Sentencias */
    cout << "Hello World!" << endl; //endl da un salto de linea
    cout << "f = " << f << endl; // f contiene valor indeterminado
    cout << "BIN_3 = " << BIN_3 << "\n"; // "\n" da un salto de linea (igual que endl)
    cout << "sexo = " << sexo << endl;
    cout << "Nombre = " << nombre << endl;
    cout << "positivo ? = " << positivo << endl;
    cout << "positivo ? = " << boolalpha << positivo << endl;
    cout << "CIUDAD = " << CIUDAD << endl;
    cout << "FLAG = " << FLAG << endl;
    
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */
