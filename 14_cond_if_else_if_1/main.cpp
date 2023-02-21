#include <iostream>
using namespace std;
int main()
{
    float nota;
    cout << "Introduzca su nota de (numero entre 0 y 10): ";
    cin >> nota;
        
    if (nota > 10.0 or nota < 0) // tambien se puede usar(nota > 10.0 || nota < 0)
        cout << "Nota no puede ser mayor que 10 o menor que 0" << endl;
    else if (nota >= 9.0)
        cout << "Nota A" << endl;
    else if (nota >= 8.0)
        cout << "Nota B" << endl;
    else if (nota >= 7.0)
        cout << "Nota C" << endl;
    else if (nota >= 6.0)
        cout << "Nota D" << endl;
    else
        cout << "Nota F" << endl;
    
    return 0;
}
