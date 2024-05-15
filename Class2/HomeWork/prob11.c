#include<stdio.h>


int main()
{
    float C;
    printf("Enter the temperature in Celsius:\t");
    scanf("%f", &C);
    printf("Temperature in Fareinheight:\t%f\n", (((float)9/5) * C + 32));
    return 0;
}