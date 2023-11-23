#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      cin >> tc;

      for (int o = 0; o < tc; o++)
      {
            string s, x;
            cin >> s >> x;

            while (s.find(x) != -1)
            {
                  s.replace(s.find(x), x.size(), "#");
            }

            cout << s << endl;
      }

      return 0;
}