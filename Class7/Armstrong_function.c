#include <stdio.h>
#include <math.h>
int checkArmstrong(int num)
{
    int temp = num;
    int digit, sum = 0;
    int digitcount = (int)log10(num) + 1;
    while (temp != 0)
    {
        digit = temp % 10;
        temp /= 10;
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

int main()
{
    int n1, n2;
    printf("Enter the range:\t");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        if (checkArmstrong(i) == 1)
        {
            printf("%d ", i);
        }
    }

}