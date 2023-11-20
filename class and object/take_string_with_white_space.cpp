#include <bits/stdc++.h>
using namespace std;

class Player
{
public:
      char name[100];
      int age;
      char country[100];
};

int main()
{
      Player a, b;

      cin.getline(a.name, 100);
      cin >> a.age >> a.country;
      getchar();
      cin.getline(b.name, 100);
      cin >> b.age >> b.country;

      cout
          << a.name << " " << a.age << " " << a.country << endl
          << b.name << " " << b.age << " " << b.country;

      return 0;
}