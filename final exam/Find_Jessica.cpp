#include <bits/stdc++.h>
using namespace std;

int main()
{
      int f = 0;
      string s, word;
      getline(cin, s);

      stringstream ss(s);

      while (ss >> word)
      {
            if (word == "Jessica")
            {
                  f = 1;
                  break;
            }
      }

      if (f == 1)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}