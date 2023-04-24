#include <iostream>
using namespace std;

struct tdni {
    int num;
    char letra;
};

void mostrar_dni(tdni d);
void leer_dni(tdni *d);

int main() {
    tdni nif;
    leer_dni(&nif);
    mostrar_dni(nif);
    return 0;
}

void mostrar_dni(tdni d) {
    cout << d.num << d.letra << endl;
}

void leer_dni(tdni *d) {
    cout << "Introduzca el numero y la letra del dni (separados por un espacio): ";
    cin >> d->num >> d->letra;
}

