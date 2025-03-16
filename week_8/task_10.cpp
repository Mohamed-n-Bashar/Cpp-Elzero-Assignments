#include <iostream>
using namespace std;

int minpositive(int numbers[], int numssize){
  int minimum;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] < minimum && numbers[i] > 0)
    {
      minimum = numbers[i];
    }
  }
  return minimum;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}