#include <iostream>
using namespace std;
int main()
{
    
    int elem=0, cont, suma=0;
    cont = 0;
    while (cont<20)
    {
        if (elem%3 == 0)
        {
            suma = suma + elem;
            cont = cont + 1;
        }
        elem = elem + 1;
    }
    cout << "Suma de los 20 primeros numeros multiplos de 3 es " << suma << endl;
    
    
    /*
    int elem=0, cont, suma=0;
    cont = 0;
    for(; cont<20;)
    {
        if (elem%3 == 0)
        {
            suma = suma + elem;
            cont = cont + 1;
        }
        elem = elem+1;
    }
    cout << "Suma de los 20 primeros numeros multiplos de 3 es " << suma << endl;
    */
    return 0;
}
