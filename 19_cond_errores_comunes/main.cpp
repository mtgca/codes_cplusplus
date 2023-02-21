
/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
using namespace std;

int main()
{
    /*Uso de operador de asignacion en lugar relacional*/
    int a = 0;
    if (a = 0) //INCORRECTO. Lo correcto es if (a == 0)
    {
         a = 2*a + 3;
    }
    
    /*Omision de llaves*/
    int edad;
    cout << "Introduzca la edad de la persona: ";
    cin >> edad;
    if (edad < 18)
    {
        cout << "La persona es menor de edad. \n";
        cout << "Tiene descuento" << endl;
    }
    else
        cout << "La persona es mayor de edad. \n";
        cout << "No tiene descuento. Paga entrada completa\n";// Esta linea se ejecuta siempre
    
    /*Uso de if en lugar de if else if*/
    float nota;
    cout << "Introduzca su nota (numero entre 0 y 10): ";
    cin >> nota;
    if (nota >= 9.0)
        cout << "A" << endl;
    if(nota >= 7.0)
        cout << "B" << endl;
    if(nota >= 5.0)
        cout << "C" << endl;
    else
        cout << "F" << endl;
    
    /*Orden logico de las condiciones if else if*/
    float nota2;
    cout << "Introduzca su nota2 (numero entre 0 y 10): ";
    cin >> nota2;
    if (nota2 >= 5.0)
        cout << "C" << endl;
    else if(nota2 >= 7.0)
        cout << "B" << endl;
    else if(nota2 >= 9.0)
        cout << "A" << endl;
    else
        cout << "F" << endl;
    
    /*El error de lógica del código anterior se puede corregir con condiciones excluyentes**/
    float nota3;
    cout << "Introduzca su nota3 (numero entre 0 y 10): ";
    cin >> nota3;
    if (nota3 >= 5.0 and nota3 < 7)
        cout << "C" << endl;
    else if(nota3 >= 7.0 and nota3 < 9)
        cout << "B" << endl;
    else if(nota3 >= 9.0)
        cout << "A" << endl;
    else
        cout << "F" << endl;
    return 0;
}

