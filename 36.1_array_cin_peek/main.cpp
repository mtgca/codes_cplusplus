#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int count = 0;

    cout << "Ingrese num. separados por espacio (presione enter para finalizar): " << endl;

    // leer numeros
    while (count < MAX_SIZE && cin >> arr[count]) {
        count++;
        // Salir si se llega al final de la linea
        if (cin.peek() == '\n') {
            break;
        }
    }

    // Imprimer los nums.
    cout << "Los num ingresados son: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

