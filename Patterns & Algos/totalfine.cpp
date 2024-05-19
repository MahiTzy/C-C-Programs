#include <bits/stdc++.h>
using namespace std;
int main()
{
    int date = 17;
    int cars[] = {2345, 1234, 4567, 4568};
    int fine[] = {200, 300, 400, 500};
    int totalFine = 0;
    // if (date % 2 == 1)
    // {
    //     for (int i = 0; i < 4; i++)
    //     {
    //         if (cars[i] % 2 == 0)
    //         {
    //             totalFine += fine[i];
    //         }
    //     }
    // }
    // if (date % 2 == 0)
    // {
    //     for (int i = 0; i < 4; i++)
    //     {
    //         if (cars[i] % 2 == 1)
    //         {
    //             totalFine += fine[i];
    //         }
    //     }
    // }
    for (int i = 0; i < 4; i++)
    {
        if (date % 2 != cars[i] % 2)
        {
            totalFine += fine[i];
        }
    }

    cout << totalFine;

    return 0;
}