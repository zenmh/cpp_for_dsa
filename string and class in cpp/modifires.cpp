#include <bits/stdc++.h>
using namespace std;

int main()
{
      string a = "Hello", b = " world";
      cout << a << endl; // Expected --> Hello

      a += b;
      cout << a << endl; // Expected --> Hello world
      a.append(b);
      cout << a << endl; // Expected --> Hello world world

      a.push_back('!');
      cout << a << endl; // Expected --> Hello world world!

      a.pop_back();
      cout << a << endl; // Expected --> Hello world world

      a.assign("Gello Koi");
      cout << a << endl; // Expected --> Gello Koi

      a.erase(5, 1);
      cout << a << endl; // Expected --> GelloKoi

      a.replace(5, 4, "Oidike");
      cout << a << endl; // Expected --> GelloOidike

      a.insert(5, " ");
      cout << a << endl; // Expected --> Gello Oidike

      return 0;
}