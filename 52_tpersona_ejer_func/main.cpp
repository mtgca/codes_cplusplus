#include <iostream>
#define NUMPERSONAS 5

using namespace std;

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
    char sexo;
};

tpersona ingresar_persona();
tpersona actualizar_joven(tpersona joven, tpersona p);
tpersona actualizar_adulta(tpersona adulta, tpersona p);
void mostrar_resultados(tpersona joven, tpersona adulta);

int main()
{
    tpersona joven = { { -1, ' ' }, { 0, 0, 0 }, ' ' };
    tpersona adulta = { { -1, ' ' }, { 0, 0, 0 }, ' ' };
    
    for (int i = 1; i <= NUMPERSONAS; i++)
    {
        tpersona p = ingresar_persona();
        
        if (p.sexo == 'f' && joven.dni.num == -1)
            joven = p;
        else if (p.sexo == 'm' && adulta.dni.num == -1)
            adulta = p;
        else if (p.sexo == 'f')
            joven = actualizar_joven(joven, p);
        else if (p.sexo == 'm')
            adulta = actualizar_adulta(adulta, p);
    }
    
    mostrar_resultados(joven, adulta);
    
    return 0;
}

tpersona ingresar_persona()
{
    tpersona p;
    
    cout << "DNI: ";
    cin >> p.dni.num >> p.dni.letra;
    cout << "Fecha de nacimiento (dd mm aaaa): ";
    cin >> p.fn.dia >> p.fn.mes >> p.fn.anyo;
    cout << "Sexo (m o f): ";
    cin >> p.sexo;
    
    return p;
}

tpersona actualizar_joven(tpersona joven, tpersona p)
{
    if (joven.dni.num == -1 ||
        p.fn.anyo > joven.fn.anyo ||
        (p.fn.anyo == joven.fn.anyo && p.fn.mes > joven.fn.mes) ||
        (p.fn.anyo == joven.fn.anyo && p.fn.mes == joven.fn.mes && p.fn.dia > joven.fn.dia))
    {
        joven = p;
    }
    return joven;
}

tpersona actualizar_adulta(tpersona adulta, tpersona p)
{
    if (adulta.dni.num == -1 ||
        p.fn.anyo < adulta.fn.anyo ||
        (p.fn.anyo == adulta.fn.anyo && p.fn.mes < adulta.fn.mes) ||
        (p.fn.anyo == adulta.fn.anyo && p.fn.mes == adulta.fn.mes && p.fn.dia < adulta.fn.dia))
    {
        adulta = p;
    }
    return adulta;
}

void mostrar_resultados(tpersona joven, tpersona adulta)
{
    if (joven.dni.num == -1)
    {
        cout << "No se han introducido personas del sexo femenino" << endl;
    }
    else
    {
        cout << "El DNI de la persona femenina mas joven es " << joven.dni.num << joven.dni.letra << endl;
    }
    
    if (adulta.dni.num==-1)
        cout << "No se han introducido personas del sexo masculino" << endl;
    else
        cout << "El DNI de la persona masculina mas adulta es "
                << adulta.dni.num << adulta.dni.letra << endl;
}

