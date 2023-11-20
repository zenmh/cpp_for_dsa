#include <bits/stdc++.h>
using namespace std;

int *fun()
{
      int *a = new int;

      *a = 30;

      return a;
}

int main()
{

      int *p = fun();

      cout << *fun();

      return 0;
}