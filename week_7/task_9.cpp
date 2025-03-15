#include <iostream>
using namespace std;

int main(){
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
  int length = size(friends);
  // 1
  for (int i = 1; i < length-1; i++)
  {
    cout << friends[i] << endl;
  }
  

  cout << "==============" << "\n";

  // 2
  int j = 1;
  while (j < length-1)
  {
    cout << friends[j] << endl;
    j++;
  }
  

  return 0;
}


/*
// Output Needed
  "Mohamed"
  "Sayed"
*/