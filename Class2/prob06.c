#include<stdio.h>


int main()
{
    int radius;
    printf("Enter the length of the radius of a circle:\t");
    scanf("%d", &radius);
    printf("The Area of the circle is\t-->\t%d\n", radius*radius);
    printf("The perimeter of the circle is\t-->\t%f\n", 2*3.1416*radius);
    return 0;
}