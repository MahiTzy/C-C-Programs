#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 5, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int index = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != count)
        {
            a[index] = a[i];
            count = a[i];
            index++;
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}