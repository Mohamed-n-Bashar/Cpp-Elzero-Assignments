/*
    task 09

    لديك بعض المتغيرات التي تحتوي على أرقام
    نريد التعديل على الأخطاء لتظهر قيم المتغيرات كما في المثال
    إذا كان هناك شيء لا نحتاج لكتابته قم بحذفه
*/

#include <iostream>
using namespace std;

int main(){
    // Edit Anything Except Values
    unsigned int a = 100;   //
    int b = -100;           // unsigned -> signed
    short c = 100;          //
    double d = 500.55;        // long -> double

    // Do Not Edit
    cout << a << "\n";      // 100
    cout << b << "\n";      // -100
    cout << c << "\n";      // 100
    cout << d << "\n";      // 500.55

    return 0;
}