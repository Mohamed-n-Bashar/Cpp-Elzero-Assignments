#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40 };

  // Method One
  // numbers.erase(numbers.end());

  // Method Two
  // numbers.pop_back();

  // Method Three
  // numbers.resize(3);

  for (int i : numbers)
  {
    cout << i << "\n";
  }
  return 0;
}