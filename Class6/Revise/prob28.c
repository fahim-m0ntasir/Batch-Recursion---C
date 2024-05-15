#include <stdio.h>
int is_perfect(int n){
 int sum = 0, div;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            div = i;
            
        }
        else{
            div = 0;
        }
        sum += div;

        
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_perfect(i))
        {
            printf("%d\t", i);
        }
        
    }
    
    return 0;
}