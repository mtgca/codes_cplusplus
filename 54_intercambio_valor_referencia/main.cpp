#include <iostream>
using namespace std;

void intercambio(int *val1, int *val2); // con puntero
void intercambio2(int &val1, int &val2); // con referencia

// ver diferencias entre puntero y referencia https://www.geeksforgeeks.org/pointers-vs-references-cpp/

int main()
{
    int v1, v2;
    cout << "Introduzca dos valores enteros (separados por un espacio): ";
    cin >> v1 >> v2;
    cout << "Antes de la funcion intercambiar v1 = " << v1 << " v2 = " << v2 << endl;
    intercambio(&v1, &v2);
    cout << "Despues de la funcion intercambiar con puntero v1 = " << v1 << " v2 = " << v2 << endl;
    
    // lo mismo pero con referencia
    cout << "Antes de la funcion intercambiar v1 = " << v1 << " v2 = " << v2 << endl;
    intercambio2(v1, v2);
    cout << "Despues de la funcion intercambiar con referencia v1 = " << v1 << " v2 = " << v2 << endl;
    
    return 0;
}

void intercambio(int *val1, int *val2) //*val1 es un puntero
{
    int aux;
    aux = *val1; //*val1 es el contenido de la variable que apunta val1
    *val1 = *val2;
    *val2 = aux;
    cout << "Dentro de la func intercambiar *val1 = " << *val1
         << " *val2 = " << *val2 << endl;
}

void intercambio2(int &val1, int &val2)
{
    int aux;
    aux = val1;
    val1 = val2;
    val2 = aux;
    cout << "Dentro de la func intercambiar val1 = " << val1
         << " val2 = " << val2 << endl;
}

