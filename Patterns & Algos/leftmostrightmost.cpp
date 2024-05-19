#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 3, 4};
    int X = 10;
    int leftIndex=-1, rightIndex = -1;
    int start = 0, end = 5;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (X == a[mid])
        {
            leftIndex = mid;
            end = mid - 1;
        }
        else if (X > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    start = 0;
    end = 5;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (X == a[mid])
        {
            rightIndex = mid;
            start = mid + 1;
        }
        else if (X > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Left Most Index of X : " << leftIndex << endl;
    cout << "Left Most Index of X : " << rightIndex;

    return 0;
}