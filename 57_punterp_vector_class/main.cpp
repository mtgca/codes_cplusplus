#include <iostream>
#include <vector>
using namespace std;

#define MAX 3

void mostrar_vector(vector<int> *vec); // pasar vector class por puntero
void inic_vector(vector<int> &vec); // pasar vector class por referencia


int main(){
    vector<int> v(MAX);
    inic_vector(v);
    mostrar_vector(&v);
    return 0;
}

/* Funcion que muestra por pantalla los MAX elementos de vec */
void mostrar_vector(vector<int> *vec){
    for(int i=0; i<MAX; i++)
        // *vec.at(i)
        cout << vec->at(i) << " "; // no se puede usar vec[i] porque vec es una clase, no un array.
}

/* Funcion que lee desde el teclado MAX elementos enteros y los guarda en vec */
void inic_vector(vector<int> &vec){
    cout << "Introduzca " << MAX << " elementos enteros (separados por un espacio): ";
    for(int i=0;i<MAX;i++)
        cin >> vec.at(i); // vec[i]
}

