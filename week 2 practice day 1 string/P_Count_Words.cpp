#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s;
      bool inside_word = false;
      int cnt = 0;

      getline(cin, s);

      for (char c : s)
      {
            if (isalpha(c))
            {
                  if (inside_word == false)
                  {
                        cnt++;
                        inside_word = true;
                  }
            }
            else
            {
                  inside_word = false;
            }
      }

      cout << cnt;

      return 0;
}