#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << "First: " << nums.front() << "\n";
  cout << "Last: " << nums.back() << "\n";


  // Method 2
  cout << "First: " << *nums.begin() << "\n";
  cout << "Last: " << *(nums.end() - 1) << "\n";
  
  
  int arr_size = nums.size();
  // Method 3
  cout << "First: " << nums[0] << "\n";
  cout << "Last: " << nums[arr_size-1] << "\n";

  return 0;
}