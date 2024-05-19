#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={1,2,7,7,7,9};
    int target=6;
    int start=0,end=5;
    int index=-1;
    while (start<=end)
    {
        
        int mid=(start+end)/2;
        if(target==a[mid]){
            cout << "The Index of Target : "<< mid;
            return 0;
        }
        else if (target>a[mid])
        {
            start=mid+1;
            index=start;
        }
        else{
            end=mid-1;
            index=mid;
        }
    }
    cout<< index;
    
    return 0;
}