#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      int age;
      int cls;
      int roll;
      float gpa;
      Student(int age, int cls, int roll, float gpa)
      {
            this->age = age;
            this->cls = cls;
            this->roll = roll;
            this->gpa = gpa;
      }
};

Student fun()
{
      Student sakib(10, 5, 3, 4.98);
      return sakib;
}

int main()
{
      Student a = fun();

      cout << a.age << " " << a.cls << " " << a.roll << " " << a.gpa;

      return 0;
}