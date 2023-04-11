
#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    /**** Iterar con for */
    
    vector<int> notas{85, 95, 48, 100, 92};
    for (int i = 0; i < notas.size(); i++) {
        cout << notas.at(i) << endl;
    }
    /**** Iterar con enhanced for */
    vector<int> grades{85, 95, 48, 100, 92};
    for (auto grade : grades) { //
        cout << grade << endl;
    }
    
    /**** Usando arrays y vectors*/
    string top[] = {"First: ", "Second: ", "Third: ", "Fourth: ", "Fifth: "};
    vector<string> names(0);
    names.push_back("Alan");
    names.push_back("Bob");
    names.push_back("Carol");
    names.push_back("David");
    names.push_back("Ellen");
    
    for (int i = 0; i < 5; i++) {
       cout << top[i] << names.at(i) << endl;
    }
    
    /* Sin eliminar ningún código existente, hacer lo siguiente:
    1. intercambiar los lugares de Alan y Carol.
    2. reemplazar a David con Fred.
    3. hacer que Grace obtenga el "quinto" lugar y eliminar a Ellen de la lista.
     */
    return 0;
}
