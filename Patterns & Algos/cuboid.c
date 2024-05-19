#include <stdio.h>

int main() {
    float length, width, height;
    float surfaceArea,volumn;

    // Input the dimensions of the cuboid
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);
    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);
    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    volumn = length*width*height;
    surfaceArea = 2 * (length * width + length * height + width * height);

    printf("The volumn of the cuboid is: %.2f\n", volumn);

    printf("The surface area of the cuboid is: %.2f\n", surfaceArea);

    return 0;
}
