#include <iostream>
#include <iomanip> // manipuladores setw, setprecision
using namespace std;
int main()
{
    int edad;
    float entrada = 6.0;
    cout << "Introduzca la edad de la persona: ";
    cin >> edad;
    if (edad < 18)
    {
        cout << "La persona es menor de edad. ";
        entrada = 0.75*entrada;
        cout << "El precio de la entrada es de " << fixed
        << setprecision(2) << entrada << endl;
    }
    else
        cout << "La persona es mayor de edad. No tiene descuento\n";
    return 0;
}
