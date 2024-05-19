#include <stdio.h>
int main() {

    int n,i=1;
    printf("Enter number : ");
    scanf("%d",&n);
    while(i<=10)
    {
        int j = n;
        j = j*i;
        printf("%d x %d = %d\n",n,i,j);
        i++;
    }
    return 0;
}
