#include <bits/stdc++.h>
using namespace std;

namespace Rahim
{
      int age1 = 34;
      void fun1() { cout << "From Rahim's Namespace" << endl; }
}
namespace Karim
{
      int age2 = 32;
      void fun2() { cout << "From Karim's Namespace" << endl; }
      // also class can be used in namespace
}

using namespace Rahim;
using namespace Karim;

int main()
{
      fun1();

      cout << age2 << endl;

      return 0;
}