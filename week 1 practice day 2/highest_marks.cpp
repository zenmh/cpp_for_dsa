#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      string name;
      int roll;
      char section;
      int math_marks;
      int cls;

      Student(string name, int roll, char section, int math_marks, int cls)
          : name(name), roll(roll), section(section), math_marks(math_marks), cls(cls)
      {
            // this->name = name;
            // this->roll = roll;
            // this->section = section;
            // this->math_marks = math_marks;
            // this->cls = cls;
      }
};

int main()
{
      Student a("John Doe", 1, 'A', 59, 10);
      Student b("Jane Smith", 2, 'B', 79, 11);
      Student c("Bob Johnson", 3, 'C', 99, 9);

      if (a.math_marks >= b.math_marks && a.math_marks >= c.math_marks)
            cout << a.name;
      else if (b.math_marks >= a.math_marks && b.math_marks >= c.math_marks)
            cout << b.name;
      else
            cout << c.name;

      return 0;
}