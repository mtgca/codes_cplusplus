#include <iostream>
using namespace std;
int main()
{
    float vol, h, r;
    const float PI{3.141516};
    char fig;
    cout << "CALCULO DE VOLUMENES:\n";
    cout << "Introduzca el caracter e o E para esfera o ";
    cout << "c o C para cilindro: ";
    cin >> fig;
    if((fig=='e') or (fig=='E'))
    {
        cout << "Introduzca el radio de la esfera: ";
        cin >> r;
        vol = (4.0*PI*r*r*r)/3.0;
        cout << "El volumen de la esfera es: " << vol << endl;
     }
     else if((fig=='c')||(fig=='C'))
     {
        cout << "Introduzca el radio del cilindro: ";
        cin >> r;
        cout << "Introduzca la altura del cilindro: ";
        cin >> h;
        vol = PI*r*r*h;
        cout << "El volumen del cilindro es: " << vol << endl;
     }
     else
         cout << "El caracter introducido no es valido\n";
    
    return 0;
}

