#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {12, 14, 16, 18};
    int m = 2;
    int n = sizeof(a) / sizeof(a[0]);
    int start = a[0], end = 0, mid;
    for (int i = 0; i < n; i++)
    {
        end += a[i];
    }
    while (start <= end)
    {
        mid = (start + end) / 2;
        int sum = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum > a[mid])
            {
                count++;
                sum = a[i];
            }
        }
        if (count <= m)
        {
            end = mid - 1;
        }
        else{
            start=mid+1;
        }
    }

    cout << end;
    return 0;
}