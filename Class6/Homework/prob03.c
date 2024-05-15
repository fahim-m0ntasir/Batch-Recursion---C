#include<stdio.h>


int main()
{
    int sum =0;
    int n = 56;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        if (i < n )
        {
            printf("+ ");
        }
        sum = sum + i;
    }
    printf("= %d", sum);
    
    return 0;
}