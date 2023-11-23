#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      string nm;
      int cls, id, math_marks, eng_marks;
      char s;
};

bool cmp(Student a, Student b)
{
      if (a.math_marks + a.eng_marks == b.math_marks + b.eng_marks)
            return a.id < b.id;
      else
            return a.math_marks + a.eng_marks > b.math_marks + b.eng_marks;
};

int main()
{
      int n;
      cin >> n;

      Student st[n];

      for (int i = 0; i < n; i++)
            cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;

      sort(st, st + n, cmp);

      for (int i = 0; i < n; i++)
            cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;

      return 0;
}