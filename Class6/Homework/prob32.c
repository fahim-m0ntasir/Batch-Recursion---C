#include<stdio.h>


int main()
{
    int number, is_prime = 1;
    printf("Enter a number\t");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        
        if (number%i == 0)
        {
            is_prime = 0;
            break;
        }
        else{
            is_prime = 1;
        }
        
    }
    if (is_prime == 1)
    {
        printf("%d is a prime number.", number);
    }
    else{
        printf("%d is not a prime number.", number);
    }
    return 0;
}