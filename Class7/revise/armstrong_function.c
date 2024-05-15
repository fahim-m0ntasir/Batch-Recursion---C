#include <stdio.h>
int power(int base, int pow){
    int result = 1;
    for (int i = 1; i <= pow; i++)
    {
        result *= base;
    }
    return result;
    
}
int digitcount(int num){
    int temp = num;
    int digit = 0, count = 0;
    while (temp)
    {
        digit = temp%10;
        count++;
        temp/=10;
    }
    return count;
}
int check_armstrong(int num){
    int temp = num;
    int sum = 0;
    int digit, count = digitcount(num);

    while (temp)
    {
        digit = temp%10;
        sum += power(digit, count);
        temp /= 10;
    }
    if (sum == num)
    {
        return 1;
    }
    else{
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
        if (check_armstrong(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}