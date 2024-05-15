#include<stdio.h>

int main()
{
    double num1, num2;
    printf("First number:\t");
    scanf("%lf", &num1);
    printf("Second number:\t");
    scanf("%lf", &num2);
    double sum = num1+num2;
    printf("Summation:\t%lf", sum);

    
    return 0;
}
