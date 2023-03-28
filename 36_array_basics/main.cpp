//
//  main.cpp
//  36_vector_basics
//
//  Created by Felipe Grijalva Arévalo on 26/3/23.
//

#include <iostream>
using namespace std;
int main() {
    
    // array con inicializacion
    int ages[] = {71, 42, 37, 5, 18};
    cout << "ages[0] = " << ages[0] << endl;
    cout << "ages[5] = " << ages[5] << endl; //genera solo warning, no es error
    cout << "ages[-1] = " << ages[-1] << endl; //genera solo warning, no es error
    cout << "ages = " << ages << endl; // imprime la dirección de memoria del primer elemento
    
    // array sin inicializacion
    int ages2[5];
    cout << "Valor indefinido: " << ages2[4] << endl; //alguien mas debe inicializar (cin)
    
    // array de strings
    string names[] = {"Alan", "Bob", "Carol", "David", "Ellen"};
    cout << names[4] << endl;
    
    // array de bool, int, double
    bool bools[] = {true, false, true};
    double decimals[] = {2.3, 4};
    int integers[2] = {1, 2}; //previene narrowing !
    cout << bools[0] << endl;
    
    // array de chars
    char cadena[5] = "ABCD";//almacena 4 letras + caracter NULL '\0'
    cout << "Tam en bytes de cadena: " << sizeof(cadena) << endl;
    cout << "cadena[] = " << cadena[2] << endl;
    
    // modificando un array
    int grades[] = {85, 95, 48, 100, 92};
    cout << grades[2] << endl;
    grades[2] = 88; //88 will replace 48 at index 2
    cout << grades[2] << endl;
    
    // tamanio de un array en bytes !!!
    string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen",
                         "Fred", "Grace ", "Henry", "Ian", "Jen"};
    cout << "Tam en bytes del array: " << sizeof(friends) << endl; //
    cout << "Tam en bytes de un elemento: " << friends[1].size() << endl;

    // numero de elementos de un array
    unsigned int num_elementos = sizeof(friends) / sizeof(friends[0]);
    cout << "Num. elementos: " << num_elementos << endl;
    //cout << "Tam en bytes del array ages[0]: " << ages[0].size() << endl; // no existe en ints
    
    // iterar en un array
    for (int i = 0; i < num_elementos; i++) {
        cout << friends[i] << endl;
    }
    
    // iterar en un string letra a letra
    string ciudad = "Quito";
    for (int k=0; k < ciudad.length();k++)
        cout << ciudad[k] <<endl;
    
    // enhanced loop
    cout << endl << "Enhanced loop" << endl << endl;
    for (string myfriend: friends) {
        cout << myfriend << endl;
    }
    
    // enhanced loop en un string lerta a letra
    string nombre = "Abcde";
    for (char c: nombre)
        cout << c <<endl;
    
    // enhanced loop con index
    // size_t es similar a un unsigned long int
    // size_t suele tener 8 bytes en la mayoría de las plataformas
    // size_t can help make your code more portable across different platforms.
    
    int arr[] = {1, 2, 3, 4, 5};
        for (size_t index = 0; int x : arr) {
            cout << "arr[" << index << "] = " << x << '\n';
            index++;
        }

    return 0;
}
