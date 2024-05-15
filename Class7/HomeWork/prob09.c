#include <stdio.h>
#include <math.h>
int checkArmstrong(int num)
{
    int temp = num, sum = 0, digit;
    int digitcount = (int)log10(num) + 1;
    while (temp != 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        sum = sum + pow(digit, digitcount);
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int checkPerfect(int num)
{
    int sum = 0, factor;
    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
        {
            factor = i;
        sum = sum + factor;
        }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number:\t");
    scanf("%d", &number);
    if (checkArmstrong(number)==1)
    {
        printf("%d is an Armstrong Number\n", number);
    }else{
        
        printf("%d is not an Armstrong Number\n", number);

    }
    if (checkPerfect(number)==1)
    {
        printf("%d is an Perfect Number\n", number);
    }else{
        
        printf("%d is not an Perfect Number\n", number);

    }
    
    return 0;
}