#include <iostream>
#include <vector> //necesario incluir para crear vectores
using namespace std;

int main() {
    
    
    // Vector sin inicializar. Se inicializa por default en 0
    vector<int> numbers(3); // vector de enteros de tamanio 3
    
    // A diferencia de los arrays, imprimir un vector no imprime su posicion de memoria
    //cout << numbers << endl; //esta linea genera un error
    
    cout << "Indice 0 de numbers: " << numbers.at(0) << endl;
    cout << "Indice 2 de numbers: " << numbers[2] << endl;
    // imprime el indice cero
    
    //Indice 3 de numbers (NO EXISTE, levanta excepcion):
    //cout << "Indice 3 de numbers: " << numbers.at(3) << endl;
    
    
    //tamanio de un vector
    vector<int> numeros(3);
    cout << "Tam de numeros: " << numeros.size() << endl;
    
    // tamanio en array
    int digits[3];
    cout << sizeof(digits) / sizeof(digits[0]) << endl;
    
    
    //vector vacio
    vector<int> vacio;
    vector<int> tambienvacio(0);
    // vector<int> vacio() //NO ES correcto vector<int> vacio() porque interpreta como declaracion de funcion por los parentesis
    cout << "Tam de vacio: " << vacio.size() << endl;
    
    // inicializacion con una lista de numeros
    vector<int> secuencia = {1, 2, 3, 4, 5}; // vector de cinco enteros, previene narrowing
    
    // inicializacion con un tamanio y valor inicial para todos los elementos
    vector<int> secuenciaDeTres(5, 3); // vector de 5 enteros, todos inicializados en 3
    
    // inicializacion con [indice]
    vector<int> coordenadas(3);
    coordenadas[0] = 1; //alternativamente  coordenadas.at(0) = 1;
    coordenadas[1] = 2;
    coordenadas[2] = 3;
    
    // vector de strings es similar la idea
    vector<string> contact{"First name", "Last name", "Phone number"};
    cout << contact.at(0) << " "
         << contact.at(1) << " "
         << contact[2] << endl;

    return 0;
}   

// captura especiticamente la exception out of range
//try {
 //   cout << "Indice 0 de numbers: " << numbers.at(3) << endl;
   // } catch (const out_of_range& e) {
     //   cerr << "Out of range error: " << e.what() << endl;
    //}
/* captura cualquier exception
try {
    cout << "Indice 0 de numbers: " << numbers.at(3) << endl;
    } catch (...) {
        cerr << "Exception: " << endl;
    }
*/
