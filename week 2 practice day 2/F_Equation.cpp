#include <bits/stdc++.h>
using namespace std;

int main()
{
      int x, n;
      long long sm = 0;

      cin >> x >> n;

      for (int i = 2; i <= n; i += 2)
            sm += round(pow(x * 1.0, i * 1.0));

      cout << sm;

      return 0;
}