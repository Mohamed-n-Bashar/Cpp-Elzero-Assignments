#include <iostream>
using namespace std;

int firstnegative(int numbers[], int numssize){
  int maximum = numbers[0];
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] > maximum && numbers[i] < 0)
    {
      maximum = numbers[i];
    }
  }
  return maximum;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 };
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}