#include<stdio.h>


int main()
{
    int num1, num2;
    printf("Enter the range\t");
    scanf("%d %d", &num1, &num2);
for (int i = num1; i <= num2; i++)
{
    


    int temp = i, sum = 0, digit = 0;
    while (temp !=0)
    {
        digit = temp %10;
        temp /=10;
        int fact=1;
        for (int j = 1; j <= digit; j++)
        {
            fact = fact*j;
        }
        
        sum = sum + fact;
        
    }

    if (sum == i)
    {
       printf("%d\t", i);
    }
}


    
    return 0;
}