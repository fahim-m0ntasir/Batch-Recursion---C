#include <stdio.h>

int main()
{
    int num, revnum = 0, digit = 0;
    printf("Enter a number:\t");
    scanf("%d", &num);

    for (int temp = num; temp != 0; temp /= 10)
    {
        digit = temp%10;
        revnum = revnum*10+digit;
    }
    if (num == revnum)
    {
        printf("%d is a palindrome number", num);

    }else{
        printf("%d is not a palindrome number", num);
    }
    

    return 0;
}