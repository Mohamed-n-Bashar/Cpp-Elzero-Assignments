#include <iostream>
using namespace std;

int main(){
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
  int length = size(friends);
  // 1
  for (int i = 0; i < length; i++)
  {
    if (friends[i][0] == 'A')
    {
      cout << friends[i] << endl;
    }
  }

  cout << "==============" << "\n";

  // 2
  int j = 0;
  while (j < length)
  {
    if (friends[j][0] == 'A')
    {
      cout << friends[j] << endl;
    }
    j++;
  }
  
  
  return 0;
}