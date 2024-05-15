#include <stdio.h>

int prime_check(int num)
{
    int is_prime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
        else
        {
            is_prime = 1;
        }
    }
    return is_prime;
}


void find_factor(int number)
{
    int num = number;

    if (prime_check(num) == 0)
    {
        int factor = 1;
        for (int i = 2; i < num; i++)
        {
            if (prime_check(i) == 1)
            {
                if (num%i == 0)
                {
                factor = num / i;
                printf("%dx", i);
                find_factor(factor);
                break;
                }
                
            }
            
        }
    }
    else{
        printf("%d", num);
    }


}

int main()
{
    int num;
    printf("Enter a random number\t-->\t");
    scanf("%d", &num);
    printf("%d\t=\t", num);
    find_factor(num);


    return 0;
}