#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      string name;
      int age;
      Student(string name, int age)
      {
            this->name = name;
            this->age = age;
      }
};

int main()
{
      Student *rakib = new Student("Rakib", 24);
      Student *sakib = new Student("Sakib", 23);

      // rakib = sakib; // ei syntax dara just rakib er memory address ke sakib er memory address a er dike muke kore deya hoice jar fole sakib memory theke chole gele rakib er kono data paowa jabe nah. and eita kora jabe nahh
      // delete sakib;

      // option - 1
      // rakib->name = sakib->name;
      // rakib->age = sakib->age;

      // delete sakib; // ekhon sakib er data delete kore dile o rakib er data a kono effect portece nah. kanor 2 tar memory alada

      // option - 2
      *rakib = *sakib;
      delete sakib; // ekhane o same kaj kora hoice like option - 1. jekhane puro object ta ke ekbare copy kora hoice.

      cout << rakib->name << " " << rakib->age;

      return 0;
}