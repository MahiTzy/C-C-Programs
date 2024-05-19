#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int givenSum=13;
    int n = sizeof(a) / sizeof(a[0]);
    int start=0;
    int end=n-1;

    while (start<end)
    {
        if(a[start]+a[end]==givenSum){
            cout<< "Yes, " << "by adding "<<a[start]<<" and "<<a[end];
            return 0;
        }
        else if (a[start]+a[end]<givenSum)
        {
            start++;
        }
        else end--;
    }
    cout<<"No";
    return 0;
}