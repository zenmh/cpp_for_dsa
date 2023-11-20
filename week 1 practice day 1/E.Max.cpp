#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, x, mx = INT_MIN;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> x;
            if (x > mx)
                  mx = x;
      }

      cout << mx;

      return 0;
}