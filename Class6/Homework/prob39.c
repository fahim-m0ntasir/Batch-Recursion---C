#include<stdio.h>


int main()
{
    int num1, num2, sum = 0, startPoint = 0;
    printf("Enter the range:\t");
    scanf("%d-%d", &num1, &num2);
    for (int i = num1; i <= num1+9; i++)
    {
        if (i%9 ==0)
        {
            startPoint = i;
            break;
        }
        
    }
    for (int i = startPoint; i <= num2; )
    {
        printf("%d\t", i);
        sum = sum+i;
        i+=9;
        if (i<=num2)
        {
            printf("+\t");
        }
        else{
            printf("\t");
        }
        
    }
    printf("=\t%d", sum);
    
    
    return 0;
}