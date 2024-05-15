#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, sum = 0, temp, digitcount = 0, digit;
    printf("Starting Number:\t");
    scanf("%d", &num1);
    printf("Ending Number:\t");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        temp = i;
        sum = 0;
        digitcount = 0;
        digit = 0;
        while (temp != 0)
        {
            temp /= 10;
            digitcount++;
        }
        temp = i;
        while (temp != 0)
        {
            digit = temp % 10;
            temp /= 10;
            sum = sum + pow(digit, digitcount);
        }
        if (sum == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}