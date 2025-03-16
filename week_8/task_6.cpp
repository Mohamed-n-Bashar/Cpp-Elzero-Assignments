#include <iostream>
#include <cctype>

using namespace std;

string swapping(string text){
  int length = size(text);
  for (int i = 0; i < length; i++)
  {
    if (text[i] == 'h' || text[i] == 'H')
    {
      continue;
    }
    
    if (isupper(text[i]))
    {
      text[i] = tolower(text[i]);
    }
    else
    {
      text[i] = toupper(text[i]);
    }
    
  }
  return text;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}