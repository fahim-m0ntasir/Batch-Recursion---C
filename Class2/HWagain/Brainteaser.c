#include <stdio.h>
int main()
{
    int num = 9999;
    int temp = num, digit = 0, sum = 0;
    while (temp)
    {
        digit = temp%10;
        temp /=10;
        sum+=digit*digit;
    }
    printf("%d", sum);
    

    return 0;
}