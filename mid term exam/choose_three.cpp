#include <bits/stdc++.h>
using namespace std;

int main()
{
      int ts;
      cin >> ts;

      for (int o = 0; o < ts; o++)
      {
            int n, s, f = 0;
            cin >> n >> s;

            int a[n];

            for (int i = 0; i < n; i++)
                  cin >> a[i];

            for (int i = 0; i < n; i++)
                  for (int j = i + 1; j < n; j++)
                        for (int k = j + 1; k < n; k++)
                              if (a[i] + a[j] + a[k] == s)
                                    f = 1;

            if (f == 1)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }

      return 0;
}