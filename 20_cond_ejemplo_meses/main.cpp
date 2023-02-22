#include <iostream>
using namespace std;
int main()
{
    int dd, mm;
    cout << "Introduzca dia y mes (separados por un espacio): ";
    cin >> dd >> mm;
    if (dd >=1 and dd <= 31 and mm >= 1 and mm <= 12)
    {
        if ((mm == 3 and dd >= 21) or (mm == 6 and dd < 21) or mm == 4 or mm == 5)
            cout << "El " << dd << "/" << mm
            << " estamos en la estacion de primavera\n";
        else if ((mm == 6 and dd >= 21) or (mm == 9 and dd < 21) or mm == 7 or mm == 8)
            cout << "El " << dd << "/" << mm
            << " estamos en la estacion de verano\n";
        else if ((mm == 9 && dd >= 21) || (mm == 12 && dd < 21) || mm == 10 || mm == 11)
            cout << "El " << dd << "/" << mm
            << " estamos en la estacion de otonio\n";
        else
            cout << "El " << dd << "/" << mm
            << " estamos en la estacion de invierno\n";
    }
    else
        printf("Error!!! Fecha incorrecta\n");
}
