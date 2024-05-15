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
        sum = sum + sign * pow(x, i);
    }

    printf("Sum = %lf", sum);

    return 0;
}