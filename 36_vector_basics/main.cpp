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
    cout << ages[0] << endl;
    cout << ages[4] << endl;
    
    // array sin inicializacion
    int ages2[5];
    cout << "Valor indefinido: " << ages2[4] << endl;
    
    // array de strings
    string names[] = {"Alan", "Bob", "Carol", "David", "Ellen"};
    cout << names[4] << endl;
    
    // array de bool, int, double
    bool bools[] = {true, false, true};
    double decimals[] = {2.3, 4};
    int integers[2] = {1, 2}; //previene narrowing !
    cout << bools[0] << endl;
    
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
    
    // iterar en un array
    for (int i = 0; i < num_elementos; i++) {
        cout << friends[i] << endl;
    }
    
    // enhanced loop
    cout << endl << "Enhanced loop" << endl << endl;
    for (string myfriend: friends) {
        cout << myfriend << endl;
    }
    
    
    return 0;
}
