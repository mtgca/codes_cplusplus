
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
    tPersona p;
    
    personas.push_back({"Alice", 30, 1.75});
    personas.push_back({"Bob", 25, 1.80});
    p = {"Charlie", 35, 1.65};
    personas.push_back(p);

    /*By using a reference to the element (const auto& persona) instead of a copy (auto persona), we avoid making a copy of the element and instead operate directly on the element stored in the vector. This can improve performance, especially if the elements are large or expensive to copy.*/
    for (auto persona : personas) {
        std::cout << persona.nombre << " tiene " << persona.edad << " años y mide "
                  << persona.estatura << " metros.\n";
    }

    return 0;
}

