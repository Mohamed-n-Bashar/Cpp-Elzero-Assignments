/*
    task 03

    بإستخدام مكونات اللغة قم بطباعة ما يلي
    السطر الأول Maximum Integer Number
    السطر الثاني Minimum Integer Number
    السطر الثالث Maximum Short Integer Number
    السطر الرابع Minimum Short Integer Number
    قم بطباعة كلمة Maximum أو Minimum قبل الرقم كما في المثال

    // Output Needed
    "Maximum Integer Number Is => 2147483647"
    "Minimum Integer Number Is => -2147483648"
    "Maximum Short Integer Number Is => 32767"
    "Minimum Short Integer Number Is => -32768"
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    cout << "\"Maximum Integer Number Is => " << INT_MAX << "\"\n";
    cout << "\"Maximum Integer Number Is => " << INT_MIN << "\"\n";
    cout << "\"Maximum Integer Number Is => " << SHRT_MAX << "\"\n";
    cout << "\"Maximum Integer Number Is => " << SHRT_MIN << "\"\n";

    return 0;
}

