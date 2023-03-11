/*
Implemente un programa que genere un patrón de triangulo rectángulo usando *.
La altura del triangulo será ingresada por teclado.
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,rows;
    cout << "Ingrese el número de filas : ";
    cin >> rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
           cout << "*";
        cout << endl;
    }
    return 0;
}
