
/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
#include <iomanip> // manipuladores setw, setprecision
using namespace std;

/* Definir constantes */
#define ERROR 0.1E-02

int main()
{
    /* Declarar e inicializar variables locales */
    char letra = 'a';
    unsigned char opc;
    int i = -1; /* Variable que almacena un valor entero de 4 bytes de tamanio */
    unsigned short edad = -17; /* Almacena un valor natural de 2 bytes */
    bool rango = true; // variable booleana, puede ser 0 false, 1 true
    bool error = false;
    float a; /* Variable real */
    double b; /* Variable real con mayor rango y precision que la anterior */
    string nombre = "Ana";
    string apellido = "Andrade";
    
    int c(4.2); // inicializa en 4, NO previene narrowing;
    int d{4}; // inicializa en 4, previene "narrowing"
    int e{}; // inicializa en 0

    /* caracteres */
    
    cout << "letra es minuscula? = " << (letra>='a' && letra<='z') << endl;
    letra = (letra -('a'-'A'));
    cout << "Conversion de min. a may. = " << letra << endl;
    cout << "Tamano de un char en bytes: " << sizeof(char) << endl;
    cout << "Tamano de un unsigned char en bytes: " << sizeof(unsigned char) << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* enteros */
    rango = (edad >= 17 && edad < 65); // boolean
    cout << "Comparacion de enteros: " << rango << endl;
    cout << "Operacion con enteros: " << ((edad/2) % 3) << endl;
    
    cout << "Tamano de un bool en bytes: " << sizeof(bool) << endl;
    cout << "Tamano de un short int en bytes: " << sizeof(short int) << endl;
    cout << "Tamano de un int en bytes: " << sizeof(int) << endl;
    cout << "Tamano de un long int en bytes: " << sizeof(long int) << endl;
    cout << "Tamano de un unsigned short int en bytes: " << sizeof(unsigned short int) << endl;
    cout << "Tamano de un short int en bytes: " << sizeof(short int) << endl;
    cout << "Tamano de un unsigned int en bytes: " << sizeof(unsigned int) << endl;
    cout << "Tamano de un unsigned long int en bytes: " << sizeof(unsigned long int) << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* reales */
     
    a = 3.52; /* Asigna 3.52 a la variable a */
    b = 1.7E-300; /* Asigna 1.7*10-300 a la variable b*/
    a = a + 3.0 - 8.0;/* La variable a vale -2.52 despues de la asignacion */
    b = b*1.5/2; /* La variable b vale 1.28*10-300 despues de la asignacion */
    cout << "Valor de a = " << a << endl;
    cout << "Valor de b = " << b << endl;
    
    cout << "a >= 27.0: "
    << (a >= 27.0) << endl; /* Expresion con resultado 0 (falso) */
    cout << "b <= 18: "
    << (b <= 18) << endl; /* Expresion con resultado 1 (cierto) */
    cout << "a*2 >= 17 || b < 0: "
    << (a*2 >= 17 || b < 0) << endl; /* Expresion con resultado 0 (falso) */
    
    error = ((a >= 7.04/2 - ERROR) && (a <= 7.04/2 + ERROR));
    cout << "Comparacion de reales: "
    << error << endl;
    
    cout << "Tamano de un float en bytes: " << sizeof(float) << endl;
    cout << "Tamano de un double en bytes: " << sizeof(double) << endl;
    cout << "Tamano de un long double en bytes: " << sizeof(long double) << endl;
    
    /* strings */
    cout << "Nombre completo: " << nombre + " " + apellido << endl;
   
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */

