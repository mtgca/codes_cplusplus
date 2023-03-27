#include <iostream>
#include <string>
using namespace std;
struct tPersona{
    string nombre;
    int edad;
    double estatura;
};

//typedef define tipos personalizados (similar a un alias)
typedef unsigned long int entero_sin_signo_muy_grande;
typedef char tMyString[1024];
typedef tPersona tPersonas[3];

int main() {
    tMyString mensaje = "max 1023 chars";
    tMyString names[2] = {"Alice", "Bob"};
    cout<< mensaje << endl;
    entero_sin_signo_muy_grande x=1;
    
    tPersonas personas = {
                            {"Alice", 30, 1.75},
                            {"Bob", 25, 1.80},
                            {"Charlie", 35, 1.65}
                         };
    //alternativamente, se puede inicializar
    //personas[0] = {"Alice", 30, 1.75};
    //personas[1] = {"Bob", 25, 1.80};
    // personas[2] = {"Charlie", 35, 1.65};
    
    for (int i = 0; i < 3; i++) {
        cout << personas[i].nombre << " tiene " << personas[i].edad << " años y mide "
                  << personas[i].estatura << " metros.\n";
    }

    return 0;
}

