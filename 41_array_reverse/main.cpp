

#include <iostream>
using namespace std;
int main() {
    string letras[] = {"A", "B", "C", "D", "E"};
    int elementos = sizeof(letras) / sizeof(letras[0]); // número de elementos
    
    // empezar en el índice 4, luego decrementar por 1 hasta que i < 0, y luego detenerse
    for (int i = elementos - 1; i >= 0; i--) {
        cout << letras[i] << endl;
    }
    
    // reverso de un solo string
    string ciudad = "Quito";
    int nelem = ciudad.length();
    for (int k=nelem - 1;k>=0; k--){
        cout << ciudad[k];
    }
    cout << endl;
}
