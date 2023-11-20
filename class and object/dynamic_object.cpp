#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      int age;
      int roll;
      float gpa;
      Student(int age, int roll, float gpa)
      {
            this->age = age;
            this->roll = roll;
            this->gpa = gpa;
      }
};

Student *fun()
{
      Student *rahim = new Student(10, 48, 3.67);

      return rahim;
}

int main()
{
      Student *a = fun();

      cout << a->age << " " << a->roll << " " << a->gpa << endl;

      delete a;

      cout << a->age << " " << a->roll << " " << a->gpa; // this is for deletion test
      return 0;
}