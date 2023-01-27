// Main function of the C++ program.

/* Incluir librerias */
#include <iostream>
using namespace std;

/* Definir constantes */

/* Definir tipos de datos */
/* Los veremos mas adelante  */

/* Definir prototipos de nuestras funciones */
/* Los veremos mas adelante  */

/* Programa principal */
int main()
{
    /* Declarar e inicializar variables locales */
    int i = 2, j = 4;
    float r = 9.0;
    
    /* Sentencias */
    // Operadores Aritmeticos
    cout << "===== Operadores Aritmeticos =======" << endl;
    cout << "i + j = " << i + j << endl;
    cout << "r - 1.5 = " << r - 1.5 << endl;
    cout << "j/3 = " << j / 3 << endl; //division entera
    cout << "j/3.0 = " << j / 3.0 << endl; //division
    cout << "j % 3 = " << j % 3 << endl;
    cout << "j % i = " << j % i << endl;
    
    //operadores relacionales
    cout <<"\n===== Operadores Relacionales =======" << endl;
    cout << "(i < j) es " << (i < j) << endl;
    cout << "(j >= 2*i) es " << (j >= 2*i) << endl;
    cout << "(j == i) es " << (j == i) << endl;
    cout << "(j != 4) es " << (j != 4) << endl;
    
    //operadores logicos
    cout <<"\n===== Operadores Logicos =======" << endl;
    cout << "(i > -2) && (i <= 5) es " << ((i > -2) && (i <= 5)) << endl;
    cout << "(j <= 0) || (j <= i) es " << ((j <= 0) || (j <= i)) << endl;
    cout << "!(j>0) es " << !(j>0) << endl;
    
    //precedencia de los operadores
    cout << "Resultado de i*j%2+10/2-i es " << (i*j%2+10/2-i)  << endl;
    /* Equivalente a ((((i*j)%2) + (10/2)) - i).
    El resultado de la expresion es 3*/

    cout << "Resultado de 10*i>j*10+3 es " << (10*i>j*10+3) << endl; 
    /* Equivalente a ((10*i)>((j*10)+3)). 
    El resultado de la expresion es 0 (falso)*/

    cout << "Resultado de i==j&&3*i<=5*j+7||3<j es " << (i==j&&3*i<=5*j+7||3<j) << endl;
    /*Equivalente a: (((i==j)&&((3*i)<=((5*j)+7)))||(3<j)). 
    El resultado de la expresion es 1 (cierto)*/
    
    cout << "fin";
    return 0;
}

/* Definir funciones */
/* Los veremos mas adelante  */
