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

      Student *rahil = new Student(17, 9, 301, 4.33);

      return rahil;
}

int main()
{
      Student *a = fun();

      cout << a->age << " " << a->cls << " " << a->roll << " " << a->gpa;
      // there have an issue with gurbaze value

      return 0;
}