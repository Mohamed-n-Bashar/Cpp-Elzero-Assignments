#include <iostream>
using namespace std;

int main(){
  // 1
  for (int i = 2; i <= 126; i = i*2 + 2)
  {
    cout << i << endl ;
  }

  cout << "==============" << "\n";

  // 2
  int j = 2;
  while(j <= 126){
    cout << j << endl;
    j = j * 2 + 2;
  }

  return 0;
}


/*
// Output Needed
2
6
14
30
62
126
*/