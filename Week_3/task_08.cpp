#include <iostream>
using namespace std;

int main(){
    // Edit Anything Except Values
    short int a = 100;                       // int    -> short
    long long int b = 15001500;              // int    -> long long
    long double c = 100.54565746;            // double -> long double

    // Do Not Edit
    cout << sizeof(a) << " Bytes\n";         // 2 Bytes
    cout << sizeof(b) << " Bytes\n";         // 8 Bytes
    cout << sizeof(c) << " Bytes\n";         // 16 Bytes

    return 0;
}