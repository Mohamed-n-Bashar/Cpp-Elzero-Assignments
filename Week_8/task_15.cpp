#include <iostream>
using namespace std;

float avg(int money[], int monsize){
  float total;
  for (int i = 0; i < monsize; i++)
  {
    total += money[i];
  }
  return total/monsize;
  
}

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}