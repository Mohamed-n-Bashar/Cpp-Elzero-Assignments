#include <iostream>
using namespace std;

int main(){
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int length = size(friends);

  for (int i = 0; i < length; i++)
  {
    cout << "=========" << endl;
    cout << "= " << friends[i] << " =" << endl;
    cout << "==================" << endl;
    cout << "== ";
    for (int j = 0; j < size(friends[i]); j++)
    {
      cout << friends[i][j];
      if (j != size(friends[i])-1 )
      {
        cout << ", ";
      }
    }
    cout << " =" << endl;
    cout << "==================" << endl;
    cout << "\n";

  }
  
  return 0;
}