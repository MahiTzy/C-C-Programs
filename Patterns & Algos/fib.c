#include<stdio.h>
main()
{
    int first = 0;
    int second =1;
    int temp;
    int range;
    scanf("%d",&range);
    printf("%d %d ",first,second);
    for(int i = 1;i<=range-2;i++)
    {

        temp=second;
        second=first+second;
        first=temp;
        printf("%d ",second);

    }
}
