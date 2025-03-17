#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 };

  swap(nums[0], nums[4]);
  swap(nums[1], nums[5]);
  swap(nums[2], nums[6]);
  swap(nums[3], nums[7]);

  for (int i : nums)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4