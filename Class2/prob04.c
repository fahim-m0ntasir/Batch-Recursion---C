#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Enter 2 numbers:\t");
    scanf("%lf %lf", &num1, &num2);
    printf("Addition:\t%lf\n", num1 + num2);
    printf("Substruction:\t%lf\n", num1 - num2);
    printf("Multiplication:\t%lf\n", num1 * num2);
    printf("Quotient:\t%lf\n", num1 / num2);
    printf("Reminder:\t%lf\n", (int)num1 % (int) num2);
    return 0;
}