#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      char name[100];
      int roll;
      float cgpa;
};

int main()
{
      Student a, b;
      cin >> a.name >> a.roll >> a.cgpa >> b.name >> b.roll >> b.cgpa; // name without space

      cout << a.name << " " << a.roll << " " << a.cgpa << endl
           << b.name << " " << b.roll << " " << b.cgpa;

      return 0;
}