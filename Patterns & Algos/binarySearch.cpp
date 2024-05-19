#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int target = 4;
    int start = 0, end = 5;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == a[mid])
        {
            cout << "Target Found at index: " << mid;
            return 0;
        }
        else if (target > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout<<"-1";
}