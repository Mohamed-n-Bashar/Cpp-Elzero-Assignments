#include <iostream>
using namespace std;

int plusandmultiply(int numbers[], int numssize){
  int EvenNumbers = 0;
  int OddNumbers = 1;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] % 2 == 0)
      EvenNumbers += numbers[i];
    else
      OddNumbers *= numbers[i];
  }
  return EvenNumbers + OddNumbers;
  
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  return 0;
}