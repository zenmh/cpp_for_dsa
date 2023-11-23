#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      string nm;
      int cls, id;
      char s;
};

int main()
{
      int n;
      cin >> n;

      Student st[n];

      for (int i = 0; i < n; i++)
            cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;

      int i = 0, j = n - 1;

      while (i < j)
      {
            swap(st[i].s, st[j].s);
            i++;
            j--;
      }

      for (int o = 0; o < n; o++)
            cout << st[o].nm << " " << st[o].cls << " " << st[o].s << " " << st[o].id << endl;

      return 0;
}