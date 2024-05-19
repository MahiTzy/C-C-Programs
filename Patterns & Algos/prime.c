#include<stdio.h>

main()
{
    int start=2;
    int input;
    scanf("%d",&input);
    if(start<2){
        printf("Not A Prime!");
    }
    for(start;start<=sqrt(input);start++)
    {
        if(input%start==0)
        {
            printf("Not A Prime!");
            return;
        }
    }
    printf("Prime Number");
}
