

#include <iostream>
using namespace std;
int main()
{
    double result = 0;
    double input;
    cout << "Ingrese los números que desea sumar. ";
    cout << "Para parar, presione cualquier tecla" << endl;
    while (true)
    {

        cin >> input;
        if (cin.good())
        {
            result += input; // result = result + input;
        }
        if (cin.fail())
        {
            cout << "Sum = " << result << endl;
            break;
            
        }
    }
    
    return 0;

}
