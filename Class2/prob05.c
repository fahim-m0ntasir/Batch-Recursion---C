#include<stdio.h>


int main()
{
    double height, width;
    printf("What's the height of a rectangle?\t");
    scanf("%lf", &height);
    printf("What's the width  of a rectangle?\t");
    scanf("%lf", &width);
    printf("Perimeter:\t%lf\n", 2*(height+width));
    printf("Area:\t%lf\n", height*width);
    return 0;
}