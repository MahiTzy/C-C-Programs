#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n)
{
  unsigned int reversed = 0;
  int numOfBits = sizeof(n) * 8;
  for (int i = 0; i < numOfBits; ++i)
  {
    if (n & (1 << i))
    {
      reversed |= 1 << ((numOfBits - 1) - i);
    }
  }
  return reversed;
}

int main()
{
  unsigned int t;
  cin >> t;
  unsigned int reversedNumber = reverseBits(t);
  cout << "Ticket Price: " << reversedNumber << endl;

  return 0;
}