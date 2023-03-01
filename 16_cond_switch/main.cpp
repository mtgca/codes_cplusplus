#include <iostream>
using namespace std;
int main()
{
int num_mes;
   cout << "Ingrese el número del mes : ";
   cin >> num_mes;
   switch(num_mes) //1 2 3 4 ... 12
   {
        case 1: //ene
        case 3: //mar
        case 5: //may
        case 7: //jul
        case 8: //ago
        case 10:// oct
        case 12: // dic
                cout << "El mes tiene 31 días. \n";
                break;
        case 2:
                cout << "Febrero tiene 28 días o 29 días si el anio es bisiesto. \n";
                break;
        case 4: //abri
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
