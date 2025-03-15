#include <iostream>
using namespace std;

int main(){
  int num1;
  int num2;
  int temp;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  if (num1 > num2)
  {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  int i = ++num1;
  while(i < num2){
    if (i % 2 == 0)
    {
      i++;
      continue;
    }
    cout << i << endl;
    i++;
    
  }
  
  return 0;
}