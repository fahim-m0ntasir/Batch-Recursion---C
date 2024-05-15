#include <stdio.h>

int main()
{
    int terms;
    double sum;
    printf("Enter the terms:\t");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        printf("1/%d\t", i);
        if (i < terms)
        {
            printf("+\t");
        }
        else
        {
            printf("");
        }

        sum = sum + 1.0 / i;
    }

    printf("\t=\t%lf", sum);
    return 0;
}