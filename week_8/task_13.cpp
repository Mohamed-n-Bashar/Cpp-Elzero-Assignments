#include <iostream>
using namespace std;

string greeting(string name, string gen = "none"){
  string title ;
  if (gen == "Male")
  {
    title = " Mr ";
  }
  else if (gen == "Female")
  {
    title = " Miss ";
  }
  else
  {
    title = " ";
  }

  return "Hello" + title + name;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}