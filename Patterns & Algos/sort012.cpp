#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {0, 2, 1, 0, 1};
    int c_0 = 0, c_1 = 0, c_2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
            c_0++;
        else if (arr[i] == 1)
            c_1++;
        else
            c_2++;
    }
    for (int i = 0; i < c_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = c_0; i < c_0 + c_1; i++)
    {
        arr[i] = 1;
    }
    for (int i = c_0 + c_1; i < c_0 + c_1 + c_2; i++)
    {
        arr[i] = 2;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}