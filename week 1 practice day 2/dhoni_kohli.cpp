#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
      int jersey_no;
      string country;
};

int main()
{

      Cricketer *dhoni = new Cricketer, *kohli = new Cricketer;

      dhoni->jersey_no = 19;
      dhoni->country = "India";

      kohli->jersey_no = dhoni->jersey_no;
      kohli->country = dhoni->country;

      cout << dhoni->jersey_no << " " << dhoni->country << endl;

      delete dhoni;

      cout << kohli->jersey_no << " " << kohli->country << endl;

      delete kohli;

      return 0;
}