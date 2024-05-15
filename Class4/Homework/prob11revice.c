#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c || b + c > a || c + a > b)
    {

        if (a == b && b == c)
        {
            printf("Equiletral");
        }
        else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
        {
            if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                printf("Right Angle & Isolates");
            }
            else
            {
                printf("Isolates");
            }
        }
        else
        {
            if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                printf("Right Angle & Scalene");
            }
            else
            {
                printf("Scalene");
            }
        }
    }
    else
    {
        printf("Triangle not possible");
    }
    return 0;
}