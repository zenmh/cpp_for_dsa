#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n1, n2;
      cin >> n1;
      int *a = new int[n1], *b = new int[n1];
      for (int i = 0; i < n1; i++)
      {
            cin >> a[i];
            b[i] = a[i];
      }

      delete[] a;

      cin >> n2;

      a = new int[n2];

      for (int i = 0; i < n1; i++)
            a[i] = b[i];

      delete[] b;

      for (int i = n1; i < n2; i++)
            cin >> a[i];

      for (int i = 0; i < n2; i++)
            cout << a[i] << endl;

      return 0;
}