#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {0,1, 2,3,4, 5, 6, 7};
    int start = 0, end = sizeof(a) / sizeof(a[0])-1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[start] != start){
            cout << start;
            return 0;
        }
        else if (a[mid] == mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    cout << start;

    return 0;
}