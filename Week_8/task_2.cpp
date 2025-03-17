#include <iostream>
using namespace std;

float money(float currency, int days){
  int weeks = days/7 ;
  int Holidays = 2*weeks ;
  float amount = currency / (days-Holidays);
  return amount;
}

int main()
{
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}