#include <iostream>
using namespace std;

int main(){
  // 1 
  for (int i = 0; i <= 18; i +=2)
  {
    if (i == 10 || i == 12)
    {
      continue;
    }
    cout << i << endl;
  }

  cout << "==============" << "\n";

  // 2
  int i = 0;
  while(i <= 18){
    if (i == 10 || i == 12)
    {
      i +=2;
      continue;
    }
    
    cout << i << endl;
    i += 2;
  }
  

  return 0;
}


// // Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18