#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();

  int step = (numbers.front() - numbers.size())*2;
  
  // Method 1
  // advance(it, step);
  
  // // Method 2
  // it += step;

  // Method 3
  // numbers.at(0) = 50;

  cout << *it << "\n"; // 50
  return 0;
}