#include <iostream>
using namespace std;
int main() {
    int notas[] = {72, 84, 63, 55, 98};
    int minimo = notas[0]; // establecer minimo al primer elemento en el arreglo
    for (int nota : notas) { // enhanced for
        if (nota < minimo) { // si el elemento es menor que el minimo
            minimo = nota; // establecer el minimo al elemento que es menor
        }
    }
    cout << "La calificación más baja es " << minimo << endl; // imprimir el minimo

}
