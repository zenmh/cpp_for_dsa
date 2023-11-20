#include <bits/stdc++.h>
using namespace std;

int *fun()
{
      int n;
      cin >> n;

      int *a = new int[n];

      for (int i = 0; i < n; i++)
            cin >> a[i];

      return a;
}

int main()
{
      int *p = fun();

      for (int i = 0; i < 3; i++)
            cout << p[i] << endl;

      return 0;
}