#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,1,5,1,6,2};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j >=0 ; j--){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else break;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}