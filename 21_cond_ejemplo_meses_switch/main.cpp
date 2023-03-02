/* Incluir librerias */
#include <iostream> // para entrada y  salida de datos
using namespace std;

int main()
{
    int dd = 21;
    int mm = 12;
    
    if (dd <0 or dd >31)
    {
        cout << "dia no valido" << endl;
        return 0;
    }
    switch (mm) {
        case 1:
        case 2:
            cout << "invierno" << endl;
            break;
        case 3:
            if (dd<21)
                cout << "invierno" << endl;
            else
                cout << "primavera" << endl;
            break;
        case 4:
        case 5:
            cout << "primavera" << endl;
            break;
        case 6:
            if (dd<21)
                cout << "primavera" << endl;
            else
                cout << "verano" << endl;
            break;
        case 7:
        case 8:
            cout << "verano" << endl;
            break;
        case 9:
            if (dd<21)
                cout << "verano" << endl;
            else
                cout << "otonio" << endl;
            break;
        case 10:
        case 11:
        case 12:
            if (dd<21)
                cout << "otonio" << endl;
            else
                cout << "invierno" << endl;
            break;
        default:
            cout << "Mes incorrecto" << endl;
            break;
    }
    return 0;
}

// solucion optimizada: Autor: Martín Montero, Mateo Vivanco
/*
#include <iostream>
using namespace std;
int main (){
    int dia, mes, error{0};
    string estacion{"invierno"};
    cout << "\nIngrese el dia y el mes: ";
    cin >> dia >> mes;
    if(dia < 1 || dia > 31) error = 1;
    else
        switch(mes){
            case 1:
            case 2:
            case 3:
                if (dia < 21 || mes < 3) break;
            case 4:
            case 5:
            case 6:
                if (dia < 21 || mes < 6) {
                    estacion = "primavera";
                    break;
                }
            case 7:
            case 8:
            case 9:
                if (dia < 21 || mes < 9) {
                    estacion = "verano";
                    break;
                }
            case 10:
            case 11:
            case 12:
                if (dia < 21 || mes < 12) estacion = "otono";
                break;
            default:
                error = 1;
        }
    if (error) cout << "\nError!! Fecha incorrecta";
    else cout << "\nEl " << dia << "/" << mes << " es " << estacion;
    return 0;
}
*/

