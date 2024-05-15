#include <stdio.h>
#include <math.h>
int main()
{

    int x, n;
    scanf("%d %d", &x, &n);
    float terms, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        terms = pow(x, 2 * i - 1) * ((i % 2 == 0) ? -1 : 1);
        sum += terms;
        printf("%.0f\n", terms);
    }
    printf("%f", sum);
    return 0;
}