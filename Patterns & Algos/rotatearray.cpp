#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {3, 4, 5, 6,7};
    int k = 3;
    int size = sizeof(a) / sizeof(a[0]);

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[size - k + i];
    }

    for (int i = size - 1; i >= k; i--)
    {
        a[i] = a[i - k];
    }

    for (int i = 0; i < k; i++)
    {
        a[i] = temp[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}