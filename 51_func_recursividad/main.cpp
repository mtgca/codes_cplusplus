#include <iostream>
#define NUMPERSONAS 5

using namespace std;

struct TFecha {
    int dia, mes, anyo;
};

struct TDni {
    int num;
    char letra;
};

struct TPersona {
    TDni dni; // DNI (número y letra)
    TFecha fn; // Fecha de nacimiento
    char sexo; // 'm'-masculino, 'f'-femenino
};

// Prototipos de las funciones
void mostrar_dni(TDni d); // Función que muestra por pantalla el número y la letra del DNI d

TPersona leer_persona(int i); // Función que lee desde el teclado los datos de una persona. La función retorna la información leída

TPersona femenina_joven(TPersona p1, TPersona p2); // Función que retorna la persona más joven entre p1 y p2. Si el campo num de p2 es -1 (indica que no almacena información de una persona), la función retorna p1

TPersona masculina_adulta(TPersona p1, TPersona p2); // Función que retorna la persona más adulta entre p1 y p2. Si el campo num de p2 es -1 (indica que no almacena información de una persona), la función retorna p1

int main()
{
    TPersona p, joven, adulta;
    int i;
    joven.dni.num = -1; // Indica que no se ha encontrado ninguna persona femenina
    adulta.dni.num = -1; // Indica que no se ha encontrado ninguna persona masculina

    for (i=0; i<NUMPERSONAS; i++)
    {
        // Se leen los datos de una persona
        p = leer_persona(i);
        if (p.sexo=='f')
            joven = femenina_joven(p, joven);
        else
            adulta = masculina_adulta(p, adulta);
    }

    // Mostrar el DNI de la mujer más joven y del hombre más adulto
    if (joven.dni.num==-1)
        cout << "No se han introducido personas del sexo femenino" << endl;
    else
    {
        cout << "DNI de la persona femenina más joven: ";
        mostrar_dni(joven.dni);
    }
    if (adulta.dni.num==-1)
        cout << "No se han introducido personas del sexo masculino" << endl;
    else
    {
        cout << "DNI de la persona masculina más adulta: ";
        mostrar_dni(adulta.dni);
    }

    return 0;
}

void mostrar_dni(TDni d)
{
    cout << d.num << d.letra << endl;
}

TPersona leer_persona(int i)
{
    TPersona p;
    cout << "DNI de la persona " << i << ": ";
    cin >> p.dni.num >> p.dni.letra;
    cout << "Fecha de nacimiento de la persona " << i << " (d/m/a): ";
    cin >> p.fn.dia >> p.fn.mes >> p.fn.anyo;
    cout << "Sexo de la persona " << i << " (m o f): ";
    cin >> p.sexo;
    return p;
}

TPersona femenina_joven(TPersona p1, TPersona p2)
{
    TPersona joven = p2;
    if (p2.dni.num==-1)
        joven = p1;
    else if (p1.fn.anyo>p2.fn.anyo || (p1.fn.anyo==p2.fn.anyo && p1.fn.mes>p2.fn.mes) || (p1.fn.anyo==p2.fn.anyo && p1.fn.mes==p2.fn.mes && p1.fn.dia>p2.fn.dia))
        joven = p1;
    return (joven);
}

TPersona masculina_adulta(TPersona p1, TPersona p2)
{
    TPersona adulta = p2;
    if (p2.dni.num==-1)
          adulta = p1;
    else if (p1.fn.anyo<p2.fn.anyo || (p1.fn.anyo==p2.fn.anyo && p1.fn.mes<p2.fn.mes)|| (p1.fn.anyo==p2.fn.anyo && p1.fn.mes==p2.fn.mes && p1.fn.dia<p2.fn.dia))
          adulta = p1;
    return (adulta);
}
