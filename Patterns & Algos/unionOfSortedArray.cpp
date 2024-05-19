#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1[] = {1, 2, 4, 6};
    int a2[] = {2, 3, 5};
    int s1 = sizeof(a1) / sizeof(a1[0]);
    int s2 = sizeof(a2) / sizeof(a2[0]);
    int i = 0, j = 0;
    cout << "Union of Sorted Array is : ";
    while (i < s1 && j < s2)
    {
        if (a1[i] < a2[j])
        {
            cout << a1[i]<<" ";
            i++;
        }
        else if (a1[i] > a2[j])
        {
            cout << a2[j]<<" ";
            j++;
        }
        else
        {
            cout << a1[i]<<" ";
            i++;
            j++;
        }
    }
    while (i<s1)
    {
        cout<< a1[i]<<" ";
        i++;
    }
    while (j<s2)
    {
        cout<<a2[j]<<" ";
        j++;
    }
    
    
    return 0;
}