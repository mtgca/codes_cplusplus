//
//  main.cpp
//  37_vector_search
//
//  Created by Felipe Grijalva Arévalo on 26/3/23.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    string cars[] = {"Corolla", "Camry", "Prius", "RAV4", "Highlander"};
    string Camry = "A Camry is not available."; //default string
    for (string s : cars){ //enhanced for loop
        if (s == "Camry"){ //if "Camry" is in array
            Camry = "A Camry is available."; //if"Camry" exists
        }
    }
    cout << Camry << endl; //print whether Camry exists or not
    return 0;
}
