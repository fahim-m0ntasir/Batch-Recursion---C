#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, div;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            div = i;
            printf("%d\t", div);
            
        }
        else{
            div = 0;
        }
        sum += div;

        
    }
    if (sum == n)
    {
        printf("Perfect");
    }
    
    
    return 0;
}