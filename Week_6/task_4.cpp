#include <iostream>
using namespace std;

int main(){
    // Example 1
    int vals[]{100, 200, 500, 400, 200};
    int sum_1 = vals[0] + vals[4];
    int sum_2 = vals[1] + vals[3];

    if (sum_1 > vals[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[0] << " + " << vals[4] << " = " << sum_1 << endl;
        cout << sum_1 << " > " << vals[2];
    }
    else if (sum_2 > vals[2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
        cout << vals[1] << " + " << vals[3] << " = " << sum_2 << endl;
        cout << sum_2 << " > " << vals[2];
    } else
    {
        cout << "Middle Number Is The Largest" << endl;
        cout << vals[2];
    }
    
    return 0;
}