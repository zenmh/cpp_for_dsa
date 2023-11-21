#include <bits/stdc++.h>
using namespace std;

int main()
{
      char s[100005];

      while (cin.getline(s, 100005))
      {
            sort(s, s + strlen(s));

            for (int i = 0; i < strlen(s); i++)
            {
                  if (s[i] == 32)
                        continue;

                  cout << s[i];
            }
            cout << endl;
      }

      return 0;
}