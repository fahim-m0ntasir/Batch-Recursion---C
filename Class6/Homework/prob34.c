#include<stdio.h>


int main()
{
    int num1, num2, count = 0;
    printf("Starting number\t-->\t");
    scanf("%d", &num1);
    printf("Ending number\t-->\t");

    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0 )
            {
                is_prime = 0;
                break;
            }
            else{
                is_prime = 1;
            }
            
        }
        if (is_prime == 1 && i != 1)
        {
            printf("%d\t", i);
            count++;

        }
        
        
    }
    printf("\nTotal -->\t%d", count);
    
    return 0;
}