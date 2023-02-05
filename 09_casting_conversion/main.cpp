
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
    int num;
    char car='1'; /* El caracter numerico '1' tiene el valor 49 en la tabla ASCII */
    
    int num1=65; /* 65 en binario: 00000000 00000000 00000000 01000001*/
    int num2=360; /* 360 en binario: 00000000 00000000 00000001 01101000*/
    char letra;
    
    short int num3; //2 bytes
    int num4=65000; /* 4 bytes, 65000 en binario es:
                     00000000 00000000 11111101 11101000 */
    int n1=3;
    int n2=2147483645;
    float nreal;
    
    int num5;
    float nreal2 = 16.81;
    
    float n3;
    double n4=32433.320945;
    
    int res;
    int numerador=3, den=2;
    
    /* de caracter a entero */
    cout << left << setw(40) << setfill('*') << "De caracter a entero " << endl;
    num = car; /* Conversion implicita que asigna 49 a la variable num */
    cout << "casting implicito de car: " << num << endl;
    num = (int) car; /* Conversion explicita que asigna 49 a la variable num */
    cout << "casting explicito de car: " << num << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* de entero a caracter */
    cout << left << setw(40) << setfill('*') << "De entero a caracter " << endl;
    letra = num1; /* Conversion implicita: asigna el byte de menor peso en num1 (01000001, decimal 65, caracter 'A') a la variable letra.*/
    cout << "casting (implicito) de num1: " << letra << endl;
    letra = (char) num2; /* Conversion explicita: asigna el byte de menor peso en num2 (01101000, decimal 104, caracter 'h') a la variable letra*/
    cout << "casting (explicito) de num2: " << letra << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* de entero a entero de menor tamanio */
    cout << left << setw(40) << setfill('*') << "De entero a entero de menor tamano " << endl;
    num3 = num4; /* Conversion implicita que asigna
                  11111101 11101000 (decimal -536) a la variable num3 */
    cout << "casting (implicito) de num4: " << num3 << endl;
    num3 = (short) num4; /* Conversion explicita que asigna -536 a num3*/
    cout << "casting (implicito) de num4: " << num3 << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* de entero a real */
    cout << left << setw(40) << setfill('*') << "De entero a real" << endl;
    nreal = n1; /* Conversion implicita que asigna 3.0 a la variable nreal */
    cout << "casting (implicito) de n1: " << nreal << endl;
    nreal = (float) n1; /* Conversion explicita */
    cout << "casting (explicito) de n1: " << nreal << endl;
    nreal = n2; /* Conversion implicita: asigna 2147483648.0 a nreal */
    cout << "casting (implicito) de n2: " << setprecision(15) << nreal << endl;
    nreal = (float) n2; /* Conversion explicita */
    cout << "casting (explicito) de n2: " << nreal << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    /* de real a entero */
    cout << left << setw(40) << setfill('*') << "De real a entero" << endl;
    num5 = nreal2; /* Conversion implicita que asigna 16 a la variable num */
    cout << "casting (implicito) de nreal2: " << num5 << endl;
    num5 = (short int) nreal2; /* Conversion explicita */
    cout << "casting (explicito) de nreal2: " << num5 << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    cout << left << setw(40) << setfill('*') << "De real a real de menor tamano" << endl;
    n3 = n4; /* Conversion implicita: asigna 32433.320312 a la variable n1 */
    cout << "casting (implicito) de n4: " << n3 << endl;
    n3 = (float) n4; /* Conversion explicita */
    cout << "casting (explicito) de n4: " << n3 << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    
    cout << left << setw(40) << setfill('*') << "Casting con varios operandos" << endl;
    res = numerador/den + 3.7; /* Asigna el valor 4 a la variable res */
    cout << "casting (implicito) de expresion: " << res << endl;
    
    res = (float) numerador/den + 3.7; /* Asigna el valor 4 a la variable res */
    cout << "casting (explicito) de expresion: " << res << endl;
    cout << setw(40) << setfill('*') << "" << endl << endl;
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */
