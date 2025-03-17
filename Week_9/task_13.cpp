#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int add(vector<int> vec){
  int result;
  for (int element : vec)
  {
    result += element;
  }
  return result;  
}

int main()
{
  vector<int> numbersone = { 10, 20, 30 };
  vector<int> numberstwo = { 5, 15, 25 };

  cout << add(numbersone) << "\n"; // 60
  cout << add(numberstwo) << "\n"; // 45

  return 0;
}