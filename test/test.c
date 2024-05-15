#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three sides of triangle");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            printf("equilateral triangle");
        }
        else if (a == b || b == c || c == a)
        {

            printf("isosceles triangle");
        }
        else

            printf("scalene triangle");
    }
    else
    {
        printf(" the sides of triangle do not belong to triangle");
    }
    return 0;
}