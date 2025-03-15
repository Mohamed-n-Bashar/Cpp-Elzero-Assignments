#include <iostream>
using namespace std;

int main(){
  // 1
  for (int i = 0; i < 28; i +=3)
  {
    cout << i << endl;
  }

  cout << "==============" << "\n";

  // 2
  int i = 0;
  while (i < 28)
  {
    cout << i << endl;
    i += 3;
  }
  
  
  return 0;
}