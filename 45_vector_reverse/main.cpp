

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> letras(0);
    letras.push_back("A");
    letras.push_back("B");
    letras.push_back("C");
    letras.push_back("D");
    letras.push_back("E");
    int tamano_original = letras.size(); //tamaño original
    //se necesitan bucles for regulares para acceder a los índices de los elementos
    
    for (int i = letras.size() - 1; i >= 0; i--) {
        letras.push_back(letras.at(i));
    } //agregar elementos en orden inverso al vector
    
    for (int j = 0; j < tamano_original; j++) {
        letras.erase(letras.begin());
    } //eliminar todos los elementos originales
    
    //el bucle for mejorado se puede usar solo para imprimir
    for (auto a : letras) {
        cout << a << " "; //imprimir todos los nuevos elementos del vector
    }
    return 0;
}
