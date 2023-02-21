#include <iostream>
using namespace std;
int main()
{
int num_mes;
   cout << "Ingrese el número del mes : ";
   cin >> num_mes;
   switch(num_mes)
   {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                cout << "El mes tiene 31 días. \n";
                break;
        case 2:
                cout << "Febrero tiene 28 días o 29 días si el anio es bisiesto. \n";
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                cout << "El mes tiene 30 días. \n";
                break;
        default:
                cout << "Número de mes invalido.\n";
      }
    return 0;
}
