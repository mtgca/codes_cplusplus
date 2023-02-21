#include <iostream>
using namespace std;

int main()
{
    int dia, mes, anyo, fecha;
    
    cout << "Introduzca una fecha en formato aaaammdd: ";
    cin >> fecha;
    if (cin.good() and fecha > 0)
    {
        dia = fecha%100;
        fecha = fecha/100;
        mes = fecha%100;
        anyo = fecha/100;
        cout << "La fecha es: "
        << dia << "/"
        << mes << "/"
        << anyo << endl;
    }

    return 0;
}

