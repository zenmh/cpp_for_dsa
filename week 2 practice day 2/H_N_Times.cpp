#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      cin >> tc;

      for (int o = 0; o < tc; o++)
      {
            int n;
            char c;
            cin >> n >> c;

            for (int i = 0; i < n; i++)
                  cout << c << " ";

            cout << endl;
      }

      return 0;
}