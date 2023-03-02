#include <iostream>
using namespace std;
int main()
{
    int carac=0;
    char letra;
    cout << "Introduzca secuencia de caracteres finalizada en punto : ";
    cin >> letra;
    while (letra != '.')
    {
        cin >> letra;
        carac = carac + 1;
        
    }
    cout << "La cantidad de caracteres de la secuencia es: " << carac << endl;
    return 0;
}
