#include <iostream>
using namespace std;

/*Definicion de estructuras*/
struct tcomplejo
{
    float part_entera;
    float part_imag;
};

struct tfecha
{
    int dia, mes, anyo;
};

struct tdni
{
    int num;
    char letra;
};

struct tpersona
{
    tdni dni;
    tfecha fn;
};

int main()
{
    /*declaracion e inicializacion de estructuras*/
    tcomplejo c1 = {1.3, 12.67}; //previene narrowing
    tcomplejo c2;
    tcomplejo c3 = {.part_entera = 1.3, .part_imag = 12.67}; //previene narrowing
    tcomplejo c4{1.3, 12.67}; //previene narrowing
    
    tdni yo;
    tfecha hoy = {.dia=1, .mes=12, .anyo=2013};
    tpersona p = {{1234567, 'A'},{30, 6, 1945}};
    tpersona p2 = {{.num=123456789, .letra='B', },{ .dia=11,.mes=12, .anyo=1945}};
    tpersona p5 = {.dni={123124,'C'}, .fn={20,3,1978}};
    tpersona p6 = {{123124,'C'}, {20,3,1978}};
    /*acceso a un campo de una estructura*/
    cout << hoy.dia << endl;
    //cout << c1.part_imag << endl;
    cout << yo.letra << endl;
    cout << p.fn.anyo << endl;
    
    /*operaciones con un campo*/
   
    c1.part_entera = 2.1;
    c1.part_imag = 3.4;
    c1.part_entera = c1.part_entera + 1;
    if (hoy.dia==6 && hoy.mes==4)
        cout << "Feliz Cumpleanios !!!" << endl;
    
    if (yo.letra=='A')
        cout << "OK" << endl;
    else
        cout << "ERROR\n";
    
    if (p.fn.anyo<hoy.anyo-18)
        cout << "Mayor de edad\n";
    
    cout << "Introduzca parte entera y parte imaginaria: ";
    cin >> c1.part_entera >> c1.part_imag;
    
    // operaciones entre estructuras completas
    
    c2 = c1;
    yo = p.dni;
    p.fn = hoy;
    
    /* CODIGO INCORRECTO
    if (c1==c2)
    {
        cout << "iguales" << endl;
    }
    */
    
    /* CODIGO CORRECTO */
    if (c1.part_entera==c2.part_entera && c1.part_imag==c2.part_imag)
    {
        cout << "iguales" << endl;
    }
    
}
//cout << "Iteracion " << i << endl;

