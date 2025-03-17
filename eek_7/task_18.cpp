#include <iostream>
using namespace std;

int main(){
  for (int i = 0; i <= 1000; i += 100)
  {
    if (i == 0)
    {
      i += 100;
    }
    if (i == 1000)
    {
      break;
    }    
    cout << i << "\n";
  }

  return 0;
}