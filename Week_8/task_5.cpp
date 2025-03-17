#include <iostream>
#include <cmath>
using namespace std;

void thepower(int num1, int num2){
  int result = 1;                  // 1
  for (int i = 0; i < num2; i++)
  {
    result *= num1;
  }
  cout << result << "\n";
  cout << "=============" << "\n";

  cout << pow(num1, num2);         // 2
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}