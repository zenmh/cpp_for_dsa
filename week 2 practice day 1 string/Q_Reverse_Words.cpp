#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s, word;
      getline(cin, s);
      // int tw = count(s.begin(), s.end(), ' '), cnt = 0;
      stringstream ss(s);

      int space = 0;

      while (ss >> word)
      {
            int i = 0, j = word.size() - 1;

            while (i < j)
            {
                  swap(word[i], word[j]);
                  i++;
                  j--;
            }

            if (space)
                  cout << " " << word;
            else
            {
                  cout << word;
                  space++;
            }

            // if (++cnt <= tw)
            //       cout << " ";
      };

      return 0;
}