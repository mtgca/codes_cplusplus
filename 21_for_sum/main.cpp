#include <iostream>
using namespace std;
int main() {
    int i, suma=0;
    
    /* For simple */
    for (i=1; i<=5; i++){ // (asignación;)
        suma = suma + i; //acumulador
        cout << "i = "<< i << ", suma = " << suma << endl;
    }
        
    
    cout << "La suma de los 5 primeros naturales es " << suma << endl;
    
    /* for doble asignación */
    for(int j=1, k=5; j<=5; j++, k--){
        cout << "j = " << j << ", k = " << k << endl;
    }
     
    
    return 0;
}
