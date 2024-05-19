#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int givenSum=3;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==givenSum){
                cout<< "Yes, " << "by adding "<<a[i]<<" and "<<a[j];
                return 0;
            }
        }
        
    }
    cout<<"No";
    
    return 0;
}