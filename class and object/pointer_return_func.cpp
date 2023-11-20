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

Student *fun()
{

      Student rahil(17, 9, 301, 4.33);
      Student *p = &rahil;
      return p;
}

int main()
{
      Student *a = fun();

      cout << a->age << " " << a->cls; // there have an issue with gurbaze value

      return 0;
}