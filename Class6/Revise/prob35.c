#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1, num1 = 0, num2 = 1; i <= n; i++)
    {
        printf("%d ", num1);
        num1 = num1+num2;
        num2 = num1 - num2;


    }
    
    return 0;
}