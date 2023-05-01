
#include <iostream>
using namespace std;

int main() {
    
    int num= 9;
    int *pnum; // Variable tipo puntero (a un entero)
    pnum = &num; // La variable pcar es inicializada con la direccion de la variable num
    cout << "Son direcciones: pnum = " << pnum << " y &num = " << (&num) << endl; // pnum y &num son direcciones de memoria.
    cout << "Tamanio de pnum en bytes= " << sizeof(pnum) << endl;
    cout << "Son enteros: *pnum = " << *pnum << " y num = " << num << endl; // *pnum y num son enteros
    
    cout << "La dirección de pnum es "<< &pnum << endl;
    
    // Para imprimir direcciones de char es necesario hacer un casting a (void*)
    // https://cplusplus.com/forum/general/59834/
    char car = 'c';
    char *pcar;
    pcar = &car; // La variable pcar es inicializada con la direccion de la variable car
    cout << "Son direcciones: pcar = " << (void*) pcar << " y &car = " << (void*)(&car) << endl; // pcar y &car son direcciones de memoria.
    cout << "Son caracteres: *pcar = " << *pcar << " y car = " << car << endl; // *pcar y car son caracteres
    cout << "Tamanio de pcar en bytes= " << sizeof(pcar) << endl;
    
    
    
    int i=5,j=3;
    int *p;
    //j = &i; //error
    p = &i; /* La variable p es inicializada con la direccion de
    la variable i. p apunta a i */
    j = *p; /* Se asigna a la variable j el valor al cual apunta
    p, es decir, se asigna el valor de i. Estas dos
    sentencias son equivalentes a j = i; */
    
    return 0;
}
