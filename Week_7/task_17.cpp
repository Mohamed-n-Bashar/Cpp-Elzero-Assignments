#include <iostream>
using namespace std;

int main(){
  for (int i = 1; i <= 102; i++)
  {
    if (i < 10)
    {
      cout << "00";
    }
    else if(i < 20){
      cout << "0";
    }
    else if(i == 20){
      cout << "0";
      cout << i << "\n";
      i += 80;
    }
    cout << i << "\n";
    
    
  }
  
  return 0;
}
