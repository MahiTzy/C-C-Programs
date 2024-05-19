#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern4(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // for (int j = 0; j < n-i-1; j++)
    // {
    //   cout <<" ";
    // }
    cout << endl;
  }
}
void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << "*";
    }
    // for (int j = 0; j < n-i-1; j++)
    // {
    //   cout <<" ";
    // }
    cout << endl;
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern9(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern10(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int start = 1;
    if (i % 2 == 0)
      start = 0;
    else
      start = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}
void pattern11(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern12(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << count << " ";
      count = count + 1;
    }
    cout << endl;
  }
}
void pattern13(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch < 'A' + (n - i); ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern15(int n)
{
  for (int i = 0; i < n; i++)
  {
    char chr = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << chr << " ";
    }
    cout << endl;
  }
}
void pattern16(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    char ch = 'A';
    int breakPoint = (2 * i + 1) / 2;
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << ch << " ";
      if (j <= breakPoint)
        ch++;
      else
        ch--;
    }
    cout << endl;
  }
}
void pattern17(int n)
{
  char startChar = 'A' + n - 1;
  for (int i = 0; i < n; i++)
  {
    for (char ch = startChar; ch >= startChar - i; ch--)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern18(int n)
{
  int spc = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    for (int j = 0; j < spc; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    spc += 2;
    cout << endl;
  }
  int sp = 2 * n - 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    for (int j = 0; j < sp; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    sp -= 2;
    cout << endl;
  }
}
void pattern19(int n)
{
  int spc = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {

    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= spc; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    if (i < n)
      spc -= 2;
    else
      spc += 2;
    cout << endl;
  }
}
void pattern20(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || j == 1 || i == n || j == n)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
void pattern21(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i;
      int left = j;
      int right = 2 * n - 2 - j;
      int down = 2 * n - 2 - i;
      cout << (n - min(min(left, right), min(top, down))) << " ";
    }
    cout << endl;
  }
}
void pattern22(int arr[])
{
  for (int i = 0; i < 4; i++)
  {
    for (int  j = 3-i; j >= 0; j--)
    {
      cout << arr[j]<<" " ;
    }
    cout<< endl;
  }
  
}
int main()
{
  int arr[4]={2,31,44,6};
  // cin >> t;
  pattern22(arr);
  return 0;
}
