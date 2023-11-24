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
                  frq[c - 'A']++;

            for (char i = 'A'; i <= 'Z'; i++)
                  for (int j = 0; j < frq[i - 'A']; j++)
                  {
                        // if (frq[i - 'A'])
                        //       cout << frq[i - 'A'];

                        cout << i;
                  }

            cout << endl;

            // cout << n << " " << s << endl;
      }

      return 0;
}