#include<stdio.h>


int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);
    int temp = num, sum = 0, digit = 0;
    while (temp !=0)
    {
        digit = temp %10;
        temp /=10;
        printf("%d! ", digit);
        if (temp != 0)
        {
            printf("+ ");
        }
        int fact=1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact*i;
        }
        
        sum = sum + fact;
        
    }
    printf("= %d\n", sum);
    if (sum == num)
    {
        printf("%d is a strong number", num);
    }
    else{
        printf("%d is a not strong number", num);

    }


    
    return 0;
}