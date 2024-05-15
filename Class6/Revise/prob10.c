#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int l= 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i ;l++, j++)
        {
            printf("%d\t", l);
        }
        printf("\n");
        
    }
    
    return 0;
}