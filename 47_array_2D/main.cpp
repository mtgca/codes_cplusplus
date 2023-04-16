
#include <iostream>
using namespace std;
int main() {
    
    /**** 2D Array: Inicializar, Acceder, Modificar */
    string names[3][5] = {
                             {"Alan", "Bob", "Carol", "David","Ellen"}, // row 1: names[0]
                             {"Fred", "Grace", "Henry", "Ian", "Jen"}, // row 2: names[1]
                             {"Kelly", "Liam", "Mary", "Nancy","Owen"} // row 3: names[2]
                           };
    
    int imagen[5][8];
    int video[5][8][100];
    double coordenadas[10][50][200];
    
    int nrow = sizeof(names) / sizeof(names[0]);
    int ncol = sizeof(names[0]) / sizeof(string);
    cout << nrow << " rows" << endl;
    cout << ncol << " columns" << endl;
    names[1][2] = "Harry";
    cout << names[1][2] << endl;
    
    /**** 2D Array: Iterar*/
    int digits[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}
                       };
    int row = sizeof(digits) / sizeof(digits[0]); //number of rows
    int col = sizeof(digits[0]) / sizeof(int); // number of columns
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
                cout << digits[i][j] << endl;
            }
            else {
                cout << digits[i][j] << " ";
            }
        }
    }
    
    /**** 2D Array: Iterar enhacend for*/
    int digits2[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}
                       };
    for (auto &i : digits2) {
        for (int j : i) {
            if ((j == 3) | (j == 6) | (j == 9)) {
                cout << j << endl;
            }
            else {
                cout << j << " ";
            }
        }
    }

    return 0;
}
