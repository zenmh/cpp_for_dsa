#include <bits/stdc++.h>
using namespace std;

int main()
{
      int ts;
      cin >> ts;

      for (int k = 0; k < ts; k++)
      {

            int n, sm = INT_MAX;
            cin >> n;

            int a[n];

            for (int i = 0; i < n; i++)
                  cin >> a[i];

            for (int i = 1; i < n; i++)
                  for (int j = i + 1; j <= n; j++)
                        sm = min(sm, a[i] + a[j] + (j - i));

            cout << sm;
      }

      return 0;
}