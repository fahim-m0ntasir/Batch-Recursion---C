#include <stdio.h>

int main()
{
    int x, y;
    printf("x =\t");
    scanf("%d", &x);
    printf("y = \t");
    scanf("%d", &y);
    if (x > 0)
    {
        if (y > 0)
        {
            printf("First Quadrant");
        }
        else if (y < 0)
        {
            printf("Fourth Quadrant");
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            printf("Second Quadrant");
        }
        else if (y < 0)
        {
            printf("Third Quadriant");
        }
    }

    return 0;
}