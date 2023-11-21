#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a, b;
      char s;

      cin >> a;
      getchar();
      cin >> s >> b;

      if ((a < b && s == 60) || (a == b && s == 61) || (a > b && s == 62))
            cout << "Right";
      else
            cout << "Wrong";

      return 0;
}