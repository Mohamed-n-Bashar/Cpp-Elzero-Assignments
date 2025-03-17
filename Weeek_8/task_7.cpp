#include <iostream>
using namespace std;

int beforeresult(int num, int count){
  int step = num;
  for (int i = 0; i < count; i++)
  {
    step--;
    num += step ;
  }
  return num;
}

int main()
{
  cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  return 0;
}