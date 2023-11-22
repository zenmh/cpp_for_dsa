#include <bits/stdc++.h>
using namespace std;

int main()
{
      int cnt = 0;

      string s, word;
      getline(cin, s);

      stringstream ss(s);

      while (ss >> word)
            cnt++;

      cout << cnt;

      return 0;
}