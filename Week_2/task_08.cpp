#include <iostream>
using namespace std;

int main()
{
  // Edit Here To Fix The Error
  int current_year;           //remove "const"
  int birth_year;             //remove "const"

  // Do Not Edit Here
  current_year = 2022;
  birth_year = 1982;
  int age_in_years = current_year - birth_year;
  cout << age_in_years;
  return 0;
}