#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int term = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        term = term*10+1;
        printf("%d", term);
        if (i == n)
        {
            printf(" = ");
        }
        else{
            printf(" + ");
        }
        sum += term;
    }
    printf("%d", sum);
    
    return 0;
}