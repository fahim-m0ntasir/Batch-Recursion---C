#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three edges of the triangle\t-->\t");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("Equilatral");
        }
        else if ((a == c && b != c) || (a == b && c != b) || (b == c && a != c))
        {
            if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                printf("Isosceles & Right Triangle");
            }
            else
            {
                printf("Isosceles");
            }
        }
        else
        {
            if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                printf("Scalene & Right Triangle");
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