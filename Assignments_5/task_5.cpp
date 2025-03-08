#include <iostream>
using namespace std;

int main(){
    int by = 82;    // by => Birth Year
    int s = 500;    // s => Salary
    (by > 80) ? ((s < 600) ? cout << "Ok\n" : cout << "High\n") : cout << "Not Ok\n";
    return 0;
}
