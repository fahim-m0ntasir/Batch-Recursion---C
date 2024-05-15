#include <stdio.h>

int main()
{
    int a, n, d;
    printf("(a,n,d) = ? \t");
    scanf("%d %d %d", &a, &n, &d);
    int num = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        num = a + i*d;
        sum = sum + num;
        printf("%d ", num);
        if (i+1 < n)
        {
            printf("+ ");
        }
    }
    printf("= %d", sum);

    return 0;
}