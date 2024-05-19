#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 43, 5, 2, 233};
    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for (int j = i; j < 5; j++)
        {
            if (arr[index] > arr[j])
                index = j;
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}