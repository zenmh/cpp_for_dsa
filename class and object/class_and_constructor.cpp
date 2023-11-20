#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      int id;
      int cls;
      float gpa;

      Student(int id, int cls, float gpa)
      {
            (*this).id = id; // those are same syntax
            this->cls = cls; // those are same syntax
            this->gpa = gpa;
      }
};

int main()
{
      Student abir(20, 6, 4.34), sabir(30, 8, 4.99);

      cout << abir.id << " " << abir.cls << " " << abir.gpa << endl
           << sabir.id << " " << sabir.cls << " " << sabir.gpa;

      return 0;
}