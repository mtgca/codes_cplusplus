
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
    char letra = 'a';
    unsigned char opc;
    int i = -1; /* Variable que almacena un valor entero de 4 bytes de tamanio */
    unsigned short edad = -17; /* Almacena un valor natural de 2 bytes */

    
    /* char */
    cout << "letra es minuscula? = " << (letra>='a' && letra<='z') << endl;
    cout << "Tamano de un char en bytes: " << sizeof(char) << endl;
    cout << "Tamano de un unsigned char en bytes: " << sizeof(unsigned char) << endl;
        
    /* int */
    cout << "Comparación de enteros: " << (edad >= 17 && edad < 65) << endl;
    cout << "Operación con enteros: " << ((edad/2) % 3) << endl;
    
    cout << "Tamano de un short int en bytes: " << sizeof(short int) << endl;
    cout << "Tamano de un int en bytes: " << sizeof(int) << endl;
    cout << "Tamano de un long int en bytes: " << sizeof(long int) << endl;
    cout << "Tamano de un unsigned short int en bytes: " << sizeof(unsigned short int) << endl;
    cout << "Tamano de un short int en bytes: " << sizeof(short int) << endl;
    cout << "Tamano de un unsigned int en bytes: " << sizeof(unsigned int) << endl;
    cout << "Tamano de un unsigned long int en bytes: " << sizeof(unsigned long int) << endl;
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */

