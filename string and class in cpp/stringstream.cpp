#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s, word;
      getline(cin, s);

      // stringstream ss(s);

      // Instead of this   stringstream ss(s); we can use next syntax.
      stringstream ss;
      ss << s;

      while (ss >> word)
      {
            cout << word << endl;
      }

      return 0;
}