#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int checkstrong(int n)
{
    int num = n;
    int sum=0;
    while (num != 0)
    {
        sum += factorial(num % 10);
        num /= 10;
    }
    if (n == sum) return 1;
    else return 0;
}
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (checkstrong(i))
        {
            printf("%d\t", i);
        }
        
    }
    
    return 0;
}