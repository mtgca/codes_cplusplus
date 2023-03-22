#include <iostream>
#define NUMPERSONAS 5

using namespace std;

struct tfecha
{
    int dia,mes,anyo;
} ;

struct tdni
{
int num;
    char letra;
};

struct tpersona
{
    tdni dni; /* DNI (número y letra) */
    tfecha fn; /* Fecha de nacimiento */
    char sexo; /* 'm'-masculino, 'f'-femenino */
};

int main()
{
    tpersona p, joven, adulta;
    int i;
    joven.dni.num = -1; /* Indica que no se ha encontrado
                         ninguna persona femenina */
    adulta.dni.num = -1; /* Indica que no se ha encontrado
                          ninguna persona masculina */
    for (i=1; i<=NUMPERSONAS; i++)
    {
        /* Se leen los datos de una persona */
        cout << "DNI de la persona " << i << ": ";
        cin >> p.dni.num >> p.dni.letra;
        cout << "F. nacimiento persona " << i << " (dd mm aaaa): ";
        cin >> p.fn.dia >> p.fn.mes >> p.fn.anyo;
        cout << "Sexo de la persona " << i << " (m o f): ";
        cin >> p.sexo;
        /* Si es la primera persona femenina, inicializar joven;
         Si es la primera persona masculina, inicializar adulta;
         Si es persona femenina (pero no la primera) y más joven
         que la actual, actualizar joven;
         Si es persona masculina (pero no la primera) y más
         adulta que la actual, actualizar adulta */
        if (p.sexo=='f' and joven.dni.num==-1)
            joven = p;
        else if (p.sexo=='m' and adulta.dni.num==-1)
            adulta = p;
        else if (p.sexo=='f' and
                 (p.fn.anyo>joven.fn.anyo or
                  (p.fn.anyo==joven.fn.anyo and p.fn.mes>joven.fn.mes) or
                  (p.fn.anyo==joven.fn.anyo and p.fn.mes==joven.fn.mes and p.fn.dia>joven.fn.dia)))
            joven = p;
        else if (p.sexo=='m' and (p.fn.anyo<adulta.fn.anyo or
                                  (p.fn.anyo==adulta.fn.anyo and
                                   p.fn.mes<adulta.fn.mes) or
                                  (p.fn.anyo==adulta.fn.anyo and
                                   p.fn.mes==adulta.fn.mes and
                                   p.fn.dia<adulta.fn.dia)))
            adulta = p;
    }
    /* Mostrar el DNI de la mujer más joven y el hombre más
     adulto */
    if (joven.dni.num==-1)
        cout << "No se han introducido personas del sexo femenino" << endl;
    else
        cout << "El DNI de la persona femenina mas joven es " << joven.dni.num << joven.dni.letra << endl;
    if (adulta.dni.num==-1)
        cout << "No se han introducido personas del sexo masculino" << endl;
    else
        cout << "El DNI de la persona masculina mas adulta es " << adulta.dni.num << adulta.dni.letra << endl;
    return 0;
}

