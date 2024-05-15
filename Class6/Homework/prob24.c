#include <stdio.h>
#include <math.h>

int main()
{
    int x, term, sign = -1;
    double sum = 0;
    printf("x\t=\t");
    scanf("%d", &x);
    printf("Term(s)\t=\t");
    scanf("%d", &term);

    for (int i = 1; i <= term * 2; i += 2)
    {
        sign *= -1;
        printf("%d^%d", x, i);
        if (i + 1 < term * 2)
        {
            if (sign < 0)
            {
                printf("+");
            }
            if (sign > 0)
            {
                printf("-");
            }
        }
    }

    printf("\n= ");
    sign = -1;
    for (int i = 1; i <= term * 2; i += 2)
    {
        sign *= -1;
        printf("%lf", sign * pow(x, i));
        if (i + 1 < term * 2)
        {
            if (sign < 0)
            {
                printf("+");
            }
            
        }

        sum = sum + sign * pow(x, i);
    }

    printf("\n= %lf", sum);

    return 0;
}