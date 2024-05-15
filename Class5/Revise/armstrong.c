#include <stdio.h>
int power(int base, int power){
    int result=1;
    for (int i = 0; i < power; i++)
    {
        result*=base;
    }
    return result;
}
int armstrong(int num){
    int is_arm = 0;
    int digit_count=0;
    int temp = num;
    while(temp)
    {
        temp /= 10;
        digit_count++;
    }
    temp = num;
    int sum = 0, digit;
    while (temp)
    {
        digit = temp%10;
        sum += power(digit, digit_count);
        temp /=10;
    }
    if (sum == num)
    {
        is_arm =1;
    }
    return is_arm;
    
}
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (armstrong(i))
        {
            printf("%d\t", i);
        }
        
    }
    
    return 0;
}