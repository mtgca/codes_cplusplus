#include <iostream>
using namespace std;

#define MAX 3

void mostrar_vector(int *vec);
void inic_vector(int vec[]);

int main(){
    int v[MAX];
    inic_vector(v);
    mostrar_vector(v);
    return 0;
}

/* Funcion que muestra por pantalla los MAX elementos de vec */
void mostrar_vector(int *vec){
    for(int i=0; i<MAX; i++)
        cout << vec[i] << " ";
}

/* Funcion que lee desde el teclado MAX elementos enteros y los guarda en vec */
void inic_vector(int vec[]){ // o void inic_vector(int *vec), o tambien void inic_vector(int vec[])
    cout << "Introduzca " << MAX << " elementos enteros (separados por un espacio): ";
    for(int i=0;i<MAX;i++)
        cin >> vec[i];
}
