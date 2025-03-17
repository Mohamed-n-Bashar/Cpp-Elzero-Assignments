#include <iostream>
using namespace std;

int main(){
  int index = 10;
  int jump = 2;

  for (;;)
  {
    if (index % 2 == 0)
    {
      cout << index << endl;
    }
    index--;
    if (index <= jump)
    {
      break;
    }
  }

  return 0;
}