#include <iostream>
#include <array>
using namespace std;

int main(){
    int nums[] = {10, 20, 30, 40, 20, 50};
    
    // Method 1
    cout << size(nums) << "\n";

    // Method 2
    cout << sizeof(nums)/sizeof(nums[0]) << "\n";

    // Method 3
    cout << end(nums) - begin(nums);
    
    return 0;
}