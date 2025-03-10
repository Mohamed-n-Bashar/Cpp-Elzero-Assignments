#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    // -1
    cout << fName + mName + lName << "\n";

    // -2
    cout << fName << mName << lName << "\n";

    // -3
    cout << fName.append(mName.append(lName)) << "\n";

    return 0;
}