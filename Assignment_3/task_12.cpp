#include <iostream>
using namespace std;

int main(){
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << int(sizeof(c)) - int(sizeof(b)) << "\n";        // 12
    cout << int(sizeof(c)) + int(sizeof(b)) << "\n";        // 20
    cout << int(sizeof(c)) * int(sizeof(a)) << "\n";        // 32
    cout << a * int(c) << "\n";                             // 5000
    cout << char(int(sizeof(c)) * int(c)) << "\n";          // P        ASCII code for P is 80

    return 0;
}