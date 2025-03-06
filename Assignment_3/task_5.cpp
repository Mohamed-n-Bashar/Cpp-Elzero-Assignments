/*
    task 05

    لديك 4 متغيرات نوعهم char ونريد طباعة ال ASCII Value الخاصة بهم
    نحتاج لأن تكون الرسالة كما في المثال ولا تكتب القيمة بيدك وإستخدم المتغيرات

    // Output Needed
    "ASCII Value of ~ Is 126"
    "ASCII Value of & Is 38"
    "ASCII Value of % Is 37"
    "ASCII Value of A Is 65"
*/

#include <iostream>
using namespace std;

int main(){
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    cout << "\"ASCII Value of " << a << " is " << int(a) << "\"\n";     // int(a) = (int)a
    cout << "\"ASCII Value of " << b << " is " << int(b) << "\"\n";     // int(b) = (int)b
    cout << "\"ASCII Value of " << c << " is " << int(c) << "\"\n";     // int(c) = (int)c
    cout << "\"ASCII Value of " << d << " is " << int(d) << "\"\n";     // int(d) = (int)d

    return 0;
}