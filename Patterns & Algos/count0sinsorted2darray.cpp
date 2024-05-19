#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][3]={
        0,0,0,
        0,0,1,
        0,0,1,
        0,1,1
    };
    int i=0,j=2;
    int cZero=0;
    while (j>=0 && i<4)
    {
        if(a[i][j]==0)
        {
            cZero+=j+1;
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<cZero;
    
    return 0;
}