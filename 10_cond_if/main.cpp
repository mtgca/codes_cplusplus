#include <iostream>
using namespace std;

int main()
{
    int a;
    
    cout << "Introduzca un numero entero positivo: ";
    cin >> a;
    /* Como solo hay una sentencia dentro del if,
     no es necesario llaves*/
    // cin.good retorna true si lo ingresado por el usuario
    //corresponde al tipo de dato de a (entero)
    // Problema: 42abc no da error porque cin toma el 42 y descarta abc
    if (cin.good() && (a%2 == 0))
        cout << "El numero " << a << " es un numero par\n";

    return 0;
}
