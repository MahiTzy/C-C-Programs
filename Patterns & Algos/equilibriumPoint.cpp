#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 6, 3, 2};
    // for (int i = 0; i < 5; i++)
    // {
    //     int sumR = 0, sumL = 0;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         sumR += a[j];
    //     }
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         sumL += a[j];
    //     }
    //     if (sumL == sumR)
    //     {
    //         cout << "Element: " << a[i] << endl
    //              << "Index: " << i + 1;
    //     }
    // }
    int sumL=0,sumR=16;
    for (int i = 0; i < 5; i++)
    {
        sumR-=a[i];
        if(i>0) sumL+=a[i-1];
        if(sumL==sumR){
            cout<< i+1;
            break;
        }
    }
    // cout<<sumR;

    return 0;
}