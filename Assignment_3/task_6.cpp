/*
    task 06

    لديك 6 متغيرات نوعهم int ونريد طباعة ال Character الذي يمثله هذا الرقم
    نحتاج لأن تكون الرسالة كما في المثال ولا تكتب القيمة بيدك وإستخدم المتغيرات
    في السطر الأخير إستخدم قيم المتغيرات لتخرج بالكلمة المطلوبة "Elzero

    // Output Needed
    "Character Of This ASCII Value 69 Is E"
    "Character Of This ASCII Value 108 Is l"
    "Character Of This ASCII Value 122 Is z"
    "Character Of This ASCII Value 101 Is e"
    "Character Of This ASCII Value 114 Is r"
    "Character Of This ASCII Value 111 Is o"

    // Output Needed In Last Line
    "Elzero"
    
*/

#include <iostream>
using namespace std;

int main(){
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;
    cout << "\"Character Of This ASCII Value " << a << " is " << char(a) << "\"\n";
    cout << "\"Character Of This ASCII Value " << b << " is " << char(b) << "\"\n";
    cout << "\"Character Of This ASCII Value " << c << " is " << char(c) << "\"\n";
    cout << "\"Character Of This ASCII Value " << d << " is " << char(d) << "\"\n";
    cout << "\"Character Of This ASCII Value " << e << " is " << char(e) << "\"\n";
    cout << "\"Character Of This ASCII Value " << f << " is " << char(f) << "\"\n" << endl;
    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);

    return 0;
}