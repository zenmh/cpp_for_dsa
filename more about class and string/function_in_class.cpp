#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
      string name;
      int age;
      int marks1;
      int marks2;

      Person(string nm, int ag, int m1, int m2)
      {
            name = nm;
            age = ag;
            marks1 = m1;
            marks2 = m2;
      }
      int tm()
      {
            return marks1 + marks2;
      }
};

int main()
{

      Person abir("abir hossain", 4, 90, 10);

      cout << abir.name << " " << abir.age << " " << abir.tm();

      return 0;
}