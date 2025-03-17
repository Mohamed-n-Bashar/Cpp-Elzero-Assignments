#include <iostream>
using namespace std;

int main(){
  int help_num = 4;
  int nums[] = {2, 4, 5, 6, 10};
  int length = size(nums);
  for (int i = 0; i < length; i++)
  {
    cout << nums[i] << " + " << nums[length-(i+1)] << " = " << nums[i]+nums[length-(i+1)] << endl;
  }
  

  return 0;
}