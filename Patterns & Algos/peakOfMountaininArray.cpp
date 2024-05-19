#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    // int a[] = {1, 3, 5,3,2,1};
    int start = 0, end = N - 1;
    int mid, index = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
        {
            cout << "Peak Index is : " << mid;
            return 0;
        }
        else if (a[mid] < a[mid + 1] && a[mid] > a[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}