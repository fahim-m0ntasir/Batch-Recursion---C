#include<stdio.h>


int main()
{
    int product, multiplicand;
    printf("Enter the value of a*b:\t");
    scanf("%d", &product);
    printf("Enter the value of a:\t");
    scanf("%d", &multiplicand);
    printf("Therefore, b =\t%f", (float)product/multiplicand);
    return 0;
}