#include<stdio.h>


int main()
{
    float radius;
    printf("Enter the radius:\t");
    scanf("%f", &radius);
    printf("Perimeter:\t%f\n", 2*3.1416*radius);
    printf("Area:\t%f\n", 3.1416*radius*radius);

    return 0;
}