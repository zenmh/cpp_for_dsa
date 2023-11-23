#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
      string name;
      int age;
      int jn;
};

int main()
{
      int n;
      cin >> n;

      Player a[n];

      for (int i = 0; i < n; i++)
      {
            cin.ignore(); // to avoid space before name

            getline(cin, a[i].name);

            cin >> a[i].age >> a[i].jn;
      }

      for (int i = 0; i < n; i++)
            cout << a[i].name << " " << a[i].age << " " << a[i].jn << endl;

      return 0;
}