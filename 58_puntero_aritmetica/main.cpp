#include <iostream>
#define MAX 3
using namespace std;

//ARITMETICA DE PUNTEROS
void mostrar_vector(int* vec);// tambien valirdo
/* Función que muestra por pantalla los MAX elementos de vec */
void inic_vector(int* vec); //tambien es valido: void inic_vector(int vec[]);
/* Función que lee desde el teclado MAX elementos enteros
y los guarda en vec */

int main()
{
    int v[MAX];
    inic_vector(v);
    mostrar_vector(v);
    return 0;
}

void mostrar_vector(int* vec) //tambien es valido: void mostrar_vector(int vec[])
{
    for (int i = 0; i < MAX; i++)
        cout << "Valor: " << *(vec + i) << ", Direccion: " << (vec + i) << endl; //puede ser tambien vec[i] en lugar de *(vec+i)
    /*vec+i imprime la direccion de cada elemento. Observar que se usa arimética de punteros*/
}

void inic_vector(int* vec) //tambien es valido: void inic_vector(int vec[])
{
    cout << "Introduzca " << MAX << " elementos enteros (separados por un espacio): ";
    for (int i = 0; i < MAX; i++)
        cin >> vec[i];
}

