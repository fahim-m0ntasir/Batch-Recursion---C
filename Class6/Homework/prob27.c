#include<stdio.h>


int main()
{
    int num, sum = 0, is_divisor;
    printf("Enter a number:\t");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {   
        if (num % i == 0)
        {
        printf("%d\t", i);
        sum = sum + i;
        }
        
    }
    printf("\nThe sum of the divisors is %d", sum);
    if (sum == num)
    {
        printf(", which is equal to the provided number.\nSo, %d is a Perfect number", num);
    }
    else{
        printf(", which is not equal to the provied number.\nSo, %d is not a Perfect number", num);
    }
    

    
    

    return 0;
}