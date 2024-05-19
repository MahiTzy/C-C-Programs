#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){
    int rev=0;
    int dp=n;
    while (n>0)
    {
        int ls=n%10;
        
        rev=(rev*10)+ls;
        n=n/10;
    }
    if(rev==dp){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

int main()
{
    int t;
    cin>>t;
    palindrome(t);
    return 0;
}