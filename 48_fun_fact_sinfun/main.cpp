#include <iostream>
using namespace std;

int main(){
    int m, n, i;
    float c, fact_m = 1.0, fact_n = 1.0, fact_mn = 1.0;
    
    cout << "Introduzca los valores de m y n (con m>=n): ";
    cin >> m >> n;

    for(i=m; i>1; i--) /* Calculo del factorial de m */
        fact_m *= i;

    for(i=n; i>1; i--) /* Calculo del factorial de n */
        fact_n *= i;

    for(i=m-n; i>1; i--)
        fact_mn *= i; /* Calculo del factorial de m-n */
    
    c = fact_m/(fact_n*fact_mn);
    cout << "El numero de combinaciones es: " << c << endl;
    return 0;
}

