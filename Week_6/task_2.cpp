#include <iostream>
using namespace std;

int main(){
    // Example 1
    int check = 25;
    int nums[]{40, 35, 30, 70, 100};

    if (nums[0] > check)
    {
        int sum = nums[0] + nums[3];
        cout << "{" << nums[0] << "}" << " + " << "{" << nums[3] << "}" " = " << sum << endl;
    }
    if (nums[1] > check)
    {
        int sum = nums[1] + nums[3];
        cout << "{" << nums[1] << "}" << " + " << "{" << nums[3] << "}" " = " << sum << endl;
    }
    if (nums[2] > check)
    {
        int sum = nums[2] + nums[3];
        cout << "{" << nums[2] << "}" << " + " << "{" << nums[3] << "}" " = " << sum;
    }
    
    return 0;
}