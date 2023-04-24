#include <iostream>
using namespace std;

void intercambio(int *val1, int *val2);

int main()
{
    int v1, v2;
    cout << "Introduzca dos valores enteros (separados por un espacio): ";
    cin >> v1 >> v2;
    cout << "Antes de la funcion intercambiar v1 = " << v1 << " v2 = " << v2 << endl;
    intercambio(&v1, &v2);
    cout << "Despues de la funcion intercambiar v1 = " << v1 << " v2 = " << v2 << endl;
    return 0;
}

void intercambio(int *val1, int *val2)
{
    int aux;
    aux = *val1;
    *val1 = *val2;
    *val2 = aux;
    cout << "Dentro de la func intercambiar *val1 = " << *val1
         << " *val2 = " << *val2 << endl;
}

