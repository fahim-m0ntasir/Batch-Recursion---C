#include <stdio.h>
#include <math.h>

int main()
{
    int terms, sum = 0;
    printf("Terms?\t");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        printf("%d\t", i * i);
        sum = sum + i * i;
        if (i < terms)
        {
            printf("+\t");
        }
    }
    printf("\t=\t%d", sum);

    return 0;
}