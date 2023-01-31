/* Este programa calcula el 20% de un valor leido por pantalla */
/* Incluir librerias */
#include <iostream>
using namespace std;
/* Definicion de constantes */
#define PORCENTAJE 20
/* Programa principal */
int main()
{
    int dato; /* Variable que guarda el valor de la entrada */
    float res; /* Variable que guarda el 20% del valor
    de la entrada */
    
    cout << "Introduzca valor: ";
    cin >> dato;
    res = dato*PORCENTAJE/100.0;
    cout << "El " << PORCENTAJE
         << " de " << dato
         << " es " << res
         << endl;
}
