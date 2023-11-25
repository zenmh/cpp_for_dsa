#include <bits/stdc++.h>
using namespace std;

int main()
{
      int tc;
      cin >> tc;

      for (int o = 0; o < tc; o++)
      {
            int n;
            cin >> n;

            int a[n], odd = 0;

            for (int i = 0; i < n; i++)
                  cin >> a[i];

            if (n % 2)
                  cout << -1 << endl;
            else
            {

                  for (int i = 0; i < n; i++)
                        if (a[i] % 2)
                              odd++;

                  cout << abs(odd - (n / 2)) << endl;
            }
      }

      return 0;
}