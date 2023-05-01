#include <iostream>
using namespace std;

struct tdni {
    int num;
    char letra;
};

void mostrar_dni(tdni d);
void leer_dni(tdni *d); //*d es un puntero a tdni

void leer_dni2(tdni &d); // &d es una referencia a tdni

int main() {
    tdni nif;
    leer_dni(&nif); //con puntero
    mostrar_dni(nif);
    leer_dni2(nif); //con referencia
    mostrar_dni(nif);
    return 0;
}

void mostrar_dni(tdni d) {
    cout << d.num << d.letra << endl;
}

void leer_dni(tdni *d) { //usando pointers
    cout << "Introduzca el numero y la letra del dni (separados por un espacio): ";
    cin >> d->num >> d->letra;
}

void leer_dni2(tdni &d) { // usando referencia
    cout << "Introduzca el numero y la letra del dni (separados por un espacio): ";
    cin >> d.num >> d.letra;
}
