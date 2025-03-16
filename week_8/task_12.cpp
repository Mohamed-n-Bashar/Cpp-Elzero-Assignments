#include <iostream>
using namespace std;

string createurl(string protocol, string name, string domain, bool w = true){
  string www;
  w == true ? www = "www." : www = "";
  return protocol + "://" + www + name + "." + domain;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
  return 0;
}