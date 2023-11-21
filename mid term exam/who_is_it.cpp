#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      int id;
      string name;
      char sec;
      int tm;

      Student(int id, string name, char sec, int tm)
      {
            this->id = id;
            this->name = name;
            this->sec = sec;
            this->tm = tm;
      }
};

int main()
{
      int ts;
      cin >> ts;

      for (int i = 0; i < ts; i++)
      {
            int id1, id2, id3, tm1, tm2, tm3;
            char sec1, sec2, sec3;
            string name1, name2, name3;

            cin >> id1 >> name1 >> sec1 >> tm1 >> id2 >> name2 >> sec2 >> tm2 >> id3 >> name3 >> sec3 >> tm3;

            Student *a = new Student(id1, name1, sec1, tm1);
            Student *b = new Student(id2, name2, sec2, tm2);
            Student *c = new Student(id3, name3, sec3, tm3);

            if (a->tm > b->tm && a->tm > c->tm)
                  cout << a->id << " " << a->name << " " << a->sec << " " << a->tm;
            else if (b->tm > a->tm && b->tm > c->tm)
                  cout
                      << b->id << " " << b->name << " " << b->sec << " " << b->tm;
            else if (c->tm > a->tm && c->tm > b->tm)
                  cout
                      << c->id << " " << c->name << " " << c->sec << " " << c->tm;
            else
            {
                  if ((a->tm == b->tm && a->id < b->id) || (a->tm == c->tm && a->id < c->id))
                        cout << a->id << " " << a->name << " " << a->sec << " " << a->tm;
                  else if ((b->tm == a->tm && b->id < a->id) || (b->tm == c->tm && b->id < c->id))
                        cout << b->id << " " << b->name << " " << b->sec << " " << b->tm;
                  else
                        cout << c->id << " " << c->name << " " << c->sec << " " << c->tm;
            }

            cout << endl;

            delete a;
            delete b;
            delete c;
      }

      return 0;
}