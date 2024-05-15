#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int term, sum= 0;
    for (int i = 1; i <= n; i++)
    {
        term = i*i;
        sum += term;
        printf("%d\t", term);
    }
    printf("\n%d", sum);
    return 0;
}