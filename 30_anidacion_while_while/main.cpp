/*
El programa siguiente lee desde el teclado una secuencia de números naturales
finalizada en -1 y muestra en pantalla la suma de los dígitos de cada número
natural leído.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, sum, aux;
    cout << "Introduzca la secuencia de numeros finalizada en -1: \n";
    cin >> n;
    while(n!=-1)
    {
        sum = 0;
        aux = n;
        while(aux!=0)
        {
            sum = sum + aux%10;
            aux = aux/10;
        }
        cout << "La suma de los digitos de " << n <<" es " << sum << endl;
        cin >> n;
    }
    return 0;
}
