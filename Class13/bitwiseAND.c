#include<stdio.h>


int main()
{
    // table:
    // A   B   A&B
    // 0   0   0
    // 0   1   0
    // 1   0   0
    // 1   1   1
    // 7    =   0 0 0 0 0 1 1 1
    // 9    =   0 0 0 0 1 0 0 1
    // 7&9  =   0 0 0 0 0 0 0 1 = 1
    // 6    =   0 0 0 0 0 1 1 0
    // 6&9  =   0 0 0 0 0 0 0 0 = 0
    int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    // printf("%d&%d   =   %d\n", a, b, a&b);
    // any odd & 1 = 1
    // any even &1 = 0
    // we can check if a number is even or odd using this property
    int num;
    scanf("%d", &num);
    if (num&1)
    {
        printf("The number is ODD\n");
    }
    else{
        printf("The number is EVEN\n");
    }
    return 0;
}