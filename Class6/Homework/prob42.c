#include<stdio.h>
#include<math.h>

int main()
{
    long long unsigned bin;
    printf("Enter a binary number");
    scanf("%d", &bin);
    long long unsigned temp = bin;
    int decimal= 0, digit = 0;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%10;
        temp /=10;
        decimal= decimal+digit*pow(2,i);
    }
    printf("%d", decimal);
    
    return 0;
}