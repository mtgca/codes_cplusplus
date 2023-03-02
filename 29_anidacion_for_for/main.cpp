/*
El programa siguiente calcula y muestra en pantalla el valor medio de los elementos de varias listas de números enteros.
La cantidad total de listas, así como el número de elementos por lista y los valores de sus elementos (valores
enteros), son introducidos desde el teclado. Supóngase que al menos hay una
lista que contiene, como mínimo, un elemento.
*/

#include <iostream>
using namespace std;
int main()
{
    int nlistas, nele, total_ele, ele, i, j;
    float prom = 0.0, sum=0.0;
    total_ele = 0;
    cout << "Numero de listas: ";
    cin >> nlistas;
    for(i=1; i<=nlistas; i++)
    {
        cout << "Cantidad de elementos de la lista " << i << ": ";
        cin >> nele;
        total_ele = total_ele + nele;
        cout << "Elementos de la lista " << i << ": ";
        for(j=1; j<=nele; j++)
        {
            cin >> ele;
            sum = sum + ele;
        }
    }
    prom = sum/total_ele;
    cout << "El valor medio es " << prom << ": ";
    return 0;
}

/*OBSERVACIONES*/
/* Obsérvese en el programa que cada bucle for es controlado por diferentes
variables de control. El uso
de la misma variable de control en los bucles puede introducir errores lógicos
en la ejecución del programa. Sin embargo, cuando los bucles no están anidados, sí se puede utilizar la misma variable de control, ya que los bucles son
independientes, de modo que cuando finaliza uno comienza otro.*/

