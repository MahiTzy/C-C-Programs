#include <stdio.h>

int main()
{
    int meters;

    printf("Enter the value in meters: ");
    scanf("%d", &meters);

    int kilometers = meters / 1000;
    int remainingMeters = meters % 1000;

    printf("%d meters is equal to %d kilometers and %d meters.\n", meters, kilometers, remainingMeters);

    return 0;
}
