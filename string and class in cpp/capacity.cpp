#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s1 = "Hello world !";
      cout << s1.size(); // Provide the length of string

      string s2;
      cout << s2.max_size(); // It gives the size that the mach9ine have

      string s3;
      cout << s3.capacity(); // It is depends on the string size

      string s4 = "hello";
      s4.clear();        // It clear the strings value
      cout << s4.size(); // expected size after clear is 0

      string s5 = "Let's Fill";
      if (s5.empty())
            cout << "Empty";
      else
            cout << "Fill";

      string s6 = "Hello world";
      s6.resize(5);       // Expected --> Hello
      s6.resize(20, 'x'); // Expected --> Hello worldxxxxxxxxx
      s6.resize(5);
      s6.resize(8); // Expected --> Hello[ nul/xyz nul/xyz nul/xyz]
      cout << s6;

      return 0;
}