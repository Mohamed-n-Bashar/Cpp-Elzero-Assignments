#include <iostream>
using namespace std;

int sumall(int numbers[], int numssize, int noneed){
  int sum = 0;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] == noneed)
    {
      continue;
    }
    sum += numbers[i];    
  }
  return sum;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 };
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}