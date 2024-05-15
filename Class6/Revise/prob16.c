#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int term = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        term +=2;
        sum+=term;
    }
    printf("%d", sum);
    
    return 0;
}