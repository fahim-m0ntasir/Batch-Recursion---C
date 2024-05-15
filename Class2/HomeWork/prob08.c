#include<stdio.h>


int main()
{
    float speedKM;
    printf("Enter the speed in Kilometres:\t");
    scanf("%f", &speedKM);
    printf("Speed in m/s:\t%f" , speedKM/3.6);
    return 0;
}