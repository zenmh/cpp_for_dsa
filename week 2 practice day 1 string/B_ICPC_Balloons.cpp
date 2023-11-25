#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      cin >> tc;

      for (int o = 0; o < tc; o++)
      {

            int n;
            string s;
            int frq[26] = {0}, cnt = 0;

            cin >> n >> s;

            for (char c : s)
                  if (frq[c - 'A'])
                        frq[c - 'A']++;
                  else
                        frq[c - 'A'] += 2;

            for (char i = 'A'; i <= 'Z'; i++)
                  if (frq[i - 'A'] > 0)
                        cnt += frq[i - 'A'];

            cout << cnt << endl;
      }

      return 0;
}