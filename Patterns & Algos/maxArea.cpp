#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,1,2,4,5};
    int n=sizeof(a) / sizeof(a[0]);
    int start=0,end=n-1;
    int length,breadth;
    int sum=0;

    while (start<end)
    {
        length=end - start;
        if(a[start]>a[end]){
            breadth=a[end];
            end--;
        }
        else{
            breadth=a[start];
            start++;
        }
        if(sum<length*breadth){
            sum=length*breadth;
        }
    }

    cout<<sum;
    return 0;
}