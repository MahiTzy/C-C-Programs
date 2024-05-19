#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3] =
        {
            1, 2, 3,
            4, 5, 6,
            7, 8, 9};
    int row = 0, col = 0;
    while (col < 3)
    {
        int i = row;
        int j = col;
        while (j >= 0)
        {
            cout << a[i][j] << " ";
            i++;
            j--;
        }
        col++;
    }
    row = 1; col = 2;
    while (row < 3)
    {
        int i = row;
        int j = col;
        while (i<=2 )
        {
            cout << a[i][j]<<" ";
            i++;
            j--;
        }
        row++;
    }

    return 0;
}