/*
Ejemplo 1: Sentencia for con sentencia if-else anidada
El programa siguiente calcula el valor máximo de la función f, definida como
f(x)=x^2-3x+5, con x en el intervalo [-2,1]. El programa muestra en pantalla el
valor máximo de la función y el valor de x en que se alcanza dicho valor.
*/
#include <iostream>
using namespace std;
int main()
{
    int i, max, max_x, aux;
    max_x = -2;
    max = (max_x)*(max_x)-3*(max_x)+5;
    for(i=-1; i<=1; i++){
        aux = i*i-3*i+5;
        if(aux>max){
            max = aux;
            max_x = i;
        }
    }
    cout << "El valor maximo de la funcion es " << max << " para x=" <<max_x <<endl;
    return 0;
}

