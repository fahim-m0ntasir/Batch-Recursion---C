#include<stdio.h>


int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("%d! = %d", num, fact);
    
    return 0;
}