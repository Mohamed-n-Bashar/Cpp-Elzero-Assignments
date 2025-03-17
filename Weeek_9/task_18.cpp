#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> firstnumbers = { 10, 30, 50, 70 };
  vector<int> secondnumbers = { 20, 40, 60, 80 };
  vector<int> allVector(8);

  merge(firstnumbers.begin(), firstnumbers.end(), secondnumbers.begin(), secondnumbers.end(), allVector.begin());
  sort(allVector.begin(), allVector.end());
  for (int element : allVector)
  {
    cout << element << "\n";
  }
  
  return 0;
}