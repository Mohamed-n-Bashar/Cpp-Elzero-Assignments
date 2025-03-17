#include <iostream>
using namespace std;

int main(){
  for(int i=0; i <= 10; i++){
    cout << i << "\n";
  }

  cout << "==================================" << endl;

  int j = 0;
  while(j <= 10){
    cout << j << "\n";
    j++;
  }

  cout << "==================================" << endl;

  int k = 0;
  do
  {
    cout << k << "\n";
    k++;

  } while (k <= 10);
  

  return 0;
}