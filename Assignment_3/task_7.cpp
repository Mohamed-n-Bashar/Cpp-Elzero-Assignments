/*
    task 07

    لديك بعض المتغيرات التي تحتوي على أرقام
    نحتاج لإستخدام ما تعلمته لتخرج لنا كلمة EWS كما في المثال
    ممنوع إستخدام أي قيم خارج قيم المتغيرات الموجودة وممنوع تغيير قيم المتغيرات
    يمكنك إستخدام ال Operator الخاص بالجمع والطرح فقط "+" و "-"

    // Output Needed
    "EWS"

    E → 69
    W → 87
    S → 83
*/

#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;
    cout << char(d-a) << char(d+c) << char(d+b) ;
    
    return 0;
}