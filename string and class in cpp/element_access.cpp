#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s = "Hello World";

      cout << s[0] << endl      // Expected --> H
           << s.front() << endl // Expected --> H
           << s.at(0) << endl   // Expected --> H
           << s.back() << endl  // Expected --> d
           << s[s.size() - 1];  // Expected --> d

      return 0;
}