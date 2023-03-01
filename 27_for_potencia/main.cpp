#include <iostream>
using namespace std;
int main(){
    int base, expo, i;
    float pot;
    cout << "Ingrese la base y el exponente (separados por espacio): ";
    cin >> base >> expo;
    pot = 1.0;
    // Para solucionar se puede usar \code{for(i=1; i<=expo; i++)} o \code{for(i=0; i<expo; i++)
    for(i=0; i<=expo; i++) //
        pot = pot*base;
    cout << "La potencia de " << base << " elevado a " << expo << " es " << pot << endl;
}
