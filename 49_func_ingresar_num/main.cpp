#include <iostream>
using namespace std;

// Prototipos de funciones
void imprimir_mensaje();
int ingresar_numero();
void imprimir_numero(int, string);
int duplicar(int x); //es opcional x, puedo escribir solo int duplicar(int);
int main()
{
    int x, y;
    imprimir_mensaje(); // No retorna valor. No tiene parametros
    x = ingresar_numero(); // Retorna valor. No tiene parametros
    y = duplicar(x); // Retorna valor. tiene param
    imprimir_numero(x, "El num ingresado es: "); // No retorna valor. Tiene parametros
    imprimir_numero(y, "El num duplicado es: "); // No retorna valor. Tiene parametros
    return 0;
}

void imprimir_mensaje()
{
    cout << "Hello world!" << endl;
}

int ingresar_numero()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    return num;
}

void imprimir_numero(int num, string mensaje)
{
    cout << mensaje << num << endl;
}

int duplicar(int x)
{
    return 2*x;
}
