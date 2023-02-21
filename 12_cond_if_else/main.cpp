#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Introduzca un numero entero positivo: ";
    cin >> a;
    if (a%2 == 0)
        cout << "El numero " << a << " es un numero par" << endl;
    else
        cout << "El numero " << a << " es un numero impar" << endl;
    return 0;
}
