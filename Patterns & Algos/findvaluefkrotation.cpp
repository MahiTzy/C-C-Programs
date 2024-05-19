#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2,3};
    // int pivot = a[0];
    int n = sizeof(a) / sizeof(a[0]);
    int start = 0, end = n - 1;
    int mid, prev, next;
    // int index;
    while (start <= end)
    {
        mid = (start + end) / 2;
        // if(pivot<a[mid] && pivot<a[end]){
        //     cout<<start;
        //     return 0;
        // }
        // if (pivot > a[mid])
        // {
        //     end = mid - 1;
        // }
        // else
        // {
        //     index = mid;
        //     start = mid + 1;
        // }
        prev = (mid - 1 + n) % n;
        next = (mid + 1) % n;
        if (a[mid] <= a[next] && a[mid] <= a[prev])
        {
            cout << "Array Rotation : "<<mid;
            return 0;
        }
        else if (a[start] <= a[mid])
        {
            // index = mid - 1;
            start = mid + 1;
        }
        else if (a[mid] <= a[end])
        {
            end = mid - 1;
        }
    }
    cout <<"Array Not Rotated";
    return 0;
}