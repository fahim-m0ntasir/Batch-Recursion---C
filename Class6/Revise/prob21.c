#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int terms = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        terms = terms*10 +9;
        sum+=terms;
        printf("%d\t", terms);
    }
    printf("\n%d\n", sum);
    
    return 0;
}