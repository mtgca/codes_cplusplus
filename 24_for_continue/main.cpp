# include <iostream>
using namespace std;
int main()
{
    int i;
    double num, sum = 0.0;
    for(i=1; i <= 10; i++)
    {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;
        if(num < 0.0) // si se ingresa un num negativo, continua a la siguiente iteracion
            continue;
        sum = sum + num;
    }
    cout << "Suma = " << sum << endl;
}
