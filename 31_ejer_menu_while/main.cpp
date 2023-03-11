#include <iostream>
using namespace std;
int main()
{
    int opc=-1, num, suma, i;
    double facto; /* esta variable se declara como double para
    tener un mayor rango de representación */
    while(opc!=3)
    {
        cout << "\n";
        cout << "1. Factorial de un numero entero positivo (>=0)\n";
        cout << "2. Sumatorio de los n primeros numeros naturales\n";
        cout << "3. Salir\n\n";
        cout << "Introduzca una opcion: ";
        cin >> opc;

        switch (opc)
        {
            case 1:
                    cout << "Introduzca un numero entero (>=0): ";
                    cin >> num;
                    facto = 1.0;
                    for(i=num; i>1; i--)
                        facto = facto*i;
                    cout << "El factorial de "
                    << num << " es: " << num << "! = " << facto << endl;
                    break;

            case 2:
                    suma = 0;
                    cout << "Introduzca la cantidad de numeros naturales: ";
                    cin >> num;
                    for(i=1; i<=num; i++)
                        suma = suma+i;
                    cout << "La suma de los " << num << " primeros naturales es: " << suma << endl;
                    break;

            case 3:
                    cout << "El programa ha finalizado\n";
                    break;

            default:
                    cout << "La opcion introducida es incorrecta\n";
        }

    }
}
