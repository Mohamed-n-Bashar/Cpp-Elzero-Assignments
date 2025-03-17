#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numbers = { 100, 200, 300, 400 };
  numbers.push_back(500);
  for (int element : numbers)
  {
    cout << element << "\n";
  }
  
  
  

  return 0;
}