#include <iostream>
using namespace std;

int pricing(int totalPhones, int usedPhones, double newPhonePrice, double taxPercentage){
  double totalPrice = (totalPhones - usedPhones)*newPhonePrice + usedPhones*(newPhonePrice - 200);
  double totalPrice_withTax = totalPrice - (totalPrice * taxPercentage/100);
  return totalPrice_withTax;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}