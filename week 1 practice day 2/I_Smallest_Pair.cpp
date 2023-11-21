#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, sm = INT_MAX;
      cin >> n;

      int a[n];

      for (int i = 0; i < n; i++)
            cin >> a[i];

      for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
            {
                  long long sum = a[i] + a[j] + (j - i);
                  if (sum < sm)
                        sm = sum;
            }

      cout << sm;

      return 0;
}