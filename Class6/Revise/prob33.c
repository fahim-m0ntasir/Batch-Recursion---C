#include <stdio.h>
// int factorial(int num){
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num -1);
//     }
// }
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
int binomial(int num1, int num2)
{
    if (num2 == 0 || num2 == num1)
        return 1;
    if (num2 == 1 || num2 == num1 - 1)
        return num1;
    int binomial = 1;
    for (int i = num1; i >= num1 - num2 + 1; i--)
    {
        binomial *= i;
    }
    binomial = binomial / factorial(num2);
    return binomial;
}
void pattern(int line)
{
    for (int i = 0; i <= line; i++)
    {
        for (int j = 0; j < line - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", binomial(i, j));
        }

        printf("\n");
    }
}
int main()
{
    pattern(6);
    // printf("%d %d", binomial(5, 2), factorial(2));
    return 0;
}