#include<stdio.h>
main()
{
    int c;
    printf("Enter number : ");
    int fact=1;
    scanf("%d",&c);
    while(c>0)
    {
        fact=fact*c;
        c--;
    }
    printf("%d",fact);
}
