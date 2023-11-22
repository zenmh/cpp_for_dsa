#include <bits/stdc++.h>
using namespace std;

int main()
{
      // option - 1
      string s1 = "hello world"; // hello world
      string s2("hello world");  // hello world

      // option - 2
      string s3("hello world", 7); // hello w

      // option - 3
      string s4 = "hello world";
      string s5(s4, 4); // o world

      // option - 4
      string s6(8, 'X'); // XXXXXXXX

      cout << s6;

      return 0;
}