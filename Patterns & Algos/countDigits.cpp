#include <bits/stdc++.h>
using namespace std;

void countDigits(int n)
{
  string numStr = to_string(n);
  int count = 0;
  for (char digit : numStr)
  {
    int digitInt = digit - '0';
    if (digitInt != 0 && n % digitInt == 0)
    {
      count++;
    }
  }
  cout << count;
}

int main()
 {
   int t;
   cin >> t;
   countDigits(t);
   return 0;
 }