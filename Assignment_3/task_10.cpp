/*
    task 10

    لدينا إسم مستعار لل Type ونوعه long long int
    نريد أن نقوم بإنشاء الإسم المستعار بطريقتين
    إذا أردت بعض التحديات هناك طريقة ثالثة يمكنك البحث عنها 🙂
*/

#include <iostream>
using namespace std;

int main(){
    // Add Type Alias Here
    
    typedef long long int lli;          // (1)
    using lli = long long int;          // (2)
    #define lli long long int           // (3)

    // Do Not Edit
    lli num = 150050005;            // This Is Long Long Int
    cout << num << "\n";            // 150050005

    return 0;
}