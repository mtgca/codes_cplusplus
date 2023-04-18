#include <iostream>
using namespace std;


int factorial(int num);

int main(){
    int m, n;
    cout << "Introduzca los valores de m y n (con m>=n): ";
    cin >> m >> n;

    int fact_m = factorial(m);
    int fact_n = factorial(n);
    int fact_mn = factorial(m-n);
    float c = (fact_m)/(fact_n*fact_mn);

    cout << "El numero de combinaciones es: " << c << endl;

    return 0;
}

int factorial(int num){
    int fact = 1;
    for(int i=num; i>1; i--){
        fact *= i;
    }
    return fact;
}
