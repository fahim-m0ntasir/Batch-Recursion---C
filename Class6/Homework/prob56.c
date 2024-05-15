#include <stdio.h>
int checkprime(int x)
{
    int is_prime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            is_prime = 0;
            break;
        }
        else
        {
            is_prime = 1;
        }
    }
    if (x == 1)
    {
        return 0;
    }
    else
    {
        return is_prime;
    }
}

int main()
{
    int num = 1000;
    for (int i = 1; i <= num/2; i++)
    {
        if (checkprime(i) == 1)
        {
            if (checkprime(num - i) == 1)
            {
                printf("%d = %d + %d\n", num, i, num -i);
            }
            
        }
        
    }
    
    return 0;
}