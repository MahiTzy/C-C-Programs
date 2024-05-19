#include<stdio.h>
main()
{
    int input;
    int sum = 0;
    printf("Enter input : ");
    scanf("%d",&input);
    while(input>0)
    {
        int temp = input%10;
        sum = sum + temp;
        input = input/10;
    }

    printf("Sum is %d",sum);
}
