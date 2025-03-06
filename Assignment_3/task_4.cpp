#include <iostream>
using namespace std;

int main(){
    cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n";            // 8

    cout << sizeof(10.5f + 5.f + 20.5f + 10.f) << "\n";      // 4
    cout << sizeof(float(10.5 + 5 + 20.5 + 10)) << "\n";     // 4

    return 0;
}