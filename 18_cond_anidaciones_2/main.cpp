#include <iostream>
using namespace std;
int main()
{
    int n, a, b, z;
    n = 3;
    a = -3;
    b = 2;
    z = 0;
    if (n > 0)
    {
         if (a > b)
            z = a;
    }
    else
        z = b;
    cout << "z = " << z << endl;
    return 0;
}
