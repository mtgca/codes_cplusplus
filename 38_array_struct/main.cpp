#include <iostream>
using namespace std;
struct tPersona {
    string nombre;
    int edad;
    double estatura;
};

int main() {
    const int TAMANIO_ARREGLO = 3;
    tPersona personas[TAMANIO_ARREGLO];
    personas[0] = {"Alice", 30, 1.75};
    personas[1] = {"Bob", 25, 1.80};
    personas[2] = {"Charlie", 35, 1.65};
    
    /* ingresando con cin
    for (int k = 0; k < TAMANIO_ARREGLO; k++) {
        cin >> personas[k].nombre;
        cin >> personas[k].edad;
        cin >> personas[k].estatura;
    }
     */

    for (int i = 0; i < TAMANIO_ARREGLO; i++) {
        cout << personas[i].nombre << " tiene " << personas[i].edad << " años y mide "
                  << personas[i].estatura << " metros.\n";
    }

    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;
struct tPersona {
    string nombre;
    int edad;
    double estatura;
};

int main() {
    vector<tPersona> personas;

    personas.push_back({"Alice", 30, 1.75});
    personas.push_back({"Bob", 25, 1.80});
    personas.push_back({"Charlie", 35, 1.65});

    for (const auto& persona : personas) {
        std::cout << persona.nombre << " tiene " << persona.edad << " años y mide "
                  << persona.estatura << " metros.\n";
    }

    return 0;
}
*/
