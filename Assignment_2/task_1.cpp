#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int age;
  int period_before;
  int period_after;
  
  cout << "Enter your age: \n";
  cin >> age;
  cout << "Calc your age before __ years: \n";
  cin >> period_before;
  cout << "Calc your age after __ years: \n";
  cin >> period_after;

  // Do Not Edit The Next 2 Lines
  cout << "\nMy Age Is: " << age << "\n";
  cout << period_before << " Years Ago My Age Was: " << age - period_before << "\n";
  cout << "after " << period_after << " Years My Age Will Be: " << age + period_after << "\n";
  
  // Add The Third Line Below

  return 0;
}



// Output

// "My Age Is: 40"
// "10 Years Ago My Age Was: 30"
// "After 10 Years My Age Will Be: 50"