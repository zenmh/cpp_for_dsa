#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a, b, c;
      char s, q;

      cin >> a;
      getchar();
      cin >> s >> b;
      getchar();
      cin >> q >> c;

      if ((a + b == c && s == 43) || (a - b == c && s == 45) || (a * b == c && s == 42))
            cout << "Yes";
      else
      {
            if (s == 43)
                  cout << a + b;
            else if (s == 45)
                  cout << a - b;
            else
                  cout << a * b;
      }

      return 0;
}