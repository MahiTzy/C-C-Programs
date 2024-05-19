#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={4,5,6,1};
    int n = sizeof(a)/sizeof(a[0]);
    int start=0,end=n-1;
    int key=2;
    int mid;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key){
            cout<< "Index : "<<mid;
            return 0;
        }
        else if (a[mid]>a[start]){
            if(a[mid]<key ||  key<a[start]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        else
        {
            if(a[start]<=key || key<a[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    cout<<"-1";
    
    return 0;
}