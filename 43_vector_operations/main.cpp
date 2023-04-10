//
//  main.cpp
//  43_vector_operations
//
//  Created by Felipe Grijalva Arévalo on 28/3/23.
//

#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    /**** Aniadir elementos a un vector  */
    
    //push_back() function aniade al final del vector un elemento
    vector<int> numbers(0); //vector vacio
    numbers.push_back(50); //aniade 50 al final del vector
    cout << numbers.at(0) << endl; //50 es el primer y unico elemento
    
    // push_back() function no reemplaza elementos.
    vector<int> lista(2); //vector con 2 elementos
    lista.push_back(50.99); //aniadir 50 al final del vector (NO PREVIENE NARROWING)
    cout << lista.at(0) << endl; //primer elemento sin inicializar
    cout << lista.at(1) << endl; //segundo elemento sin inicializar
    cout << lista.at(2) << endl; //50 es el tercer elemento del vector.
    
    // insert() function aniade une elemento en un indice especifico
    vector<int> num(2);
    num.insert(num.begin()+1, 50); //aniade 50 al indice 1
    cout << num.at(0) << endl; //0
    cout << num.at(1) << endl; //50
    cout << num.at(2) << endl; //0
    num.insert(num.begin()+1, 100); //aniade 100 al indice 1
    cout << num.at(0) << endl; //0
    cout << num.at(1) << endl; //100
    cout << num.at(2) << endl; //50 es ahora el indice 2
    cout << num.at(3) << endl; //0
    num.insert(num.begin(), 200); // aniade 200 en indice 0 (inicio) (push)
    num.insert(num.end(),500); // aniade 500 al final (equivalente a num.push_back(500);
    
    /**** Remover elementos a un vector  */
    
    // pop_back() function remueve el ultimo elemento.
    vector<int> vec(0); //vector vacio
    vec.push_back(50); //aniadir 50 al final del vector
    vec.push_back(100); //aniadir 100 al final del vector
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl << endl;
    vec.pop_back(); //remover ultimo elemento del vector
    cout << vec.at(0) << endl;
    
    // erase() function remueve en un indice especifico
    vector<int> x(0); //vector vacio
    x.push_back(50); //aniadir 50 al vector
    x.push_back(100); //aniadir 100 al vector
    x.push_back(150); //aniadir 150 al vector
    x.erase(x.begin()+1); //removes 100 (indice 1)
    
    /**** Modificar elementos a un vector  */
    
    vector<string> contact = {"First name", "Last name", "Phone number"};
    contact.at(2) = "Email"; //cambia elemento de indice 2 a "Email"

}
