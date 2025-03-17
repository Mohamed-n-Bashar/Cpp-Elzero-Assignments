#include <iostream>
using namespace std;

int books(int small, int mediam, int large, int shelf){
  int freeSpace = shelf * 20;
  int neededSpace = small*2 + mediam*4 + large*6;
  if (neededSpace < freeSpace)
    return freeSpace - neededSpace;
  else
    return 0;
  
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}