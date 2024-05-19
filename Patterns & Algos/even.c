#include <stdio.h>
int main() {
    int start = 1;
    int end = 100;
    while(start<=end)
    {
        if(start%2==0)
        {
            printf("%d\n",start);
        }
        start++;
    }

    return 0;
}
