#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
      string name;
      int age, jn;
};

int main()
{
      int n;
      cin >> n;

      Player a[n], mn, mx;

      mn.age = INT_MAX;
      mx.age = INT_MIN;

      for (int i = 0; i < n; i++)
      {
            cin.ignore();
            getline(cin, a[i].name);
            cin >> a[i].age >> a[i].jn;
      }

      for (int i = 0; i < n; i++)
            if (a[i].age < mn.age)
                  mn = a[i];

      for (int i = 0; i < n; i++)
            if (a[i].age > mx.age)
                  mx = a[i];

      cout << "Elder: " << mx.name << " " << mx.age << " " << mx.jn << endl
           << "Smaller: " << mn.name << " " << mn.age << " " << mn.jn;

      return 0;
}