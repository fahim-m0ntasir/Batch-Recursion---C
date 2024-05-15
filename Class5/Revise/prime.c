#include <stdio.h>
int check_prime(int n){
    int is_prime = 1;
    if ( n ==1)
    {
        return 0;
    }
    if ( n ==2)
    {
        return is_prime;
    }
    
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            is_prime = 0;
            break;
        }                                                                                             
        
    }
    return is_prime;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       if (check_prime(i) == 1)
       {
        printf("%d\t", i);
       }
       
    }
    
    return 0;
}