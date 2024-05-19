#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    int count[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[arr[i]]++;
    }
    for (int j = 0; j < 5; j++)
    {
        if (count[j] > 1)
        {
            cout << j << " ";
        }
    }
    return 0;
}