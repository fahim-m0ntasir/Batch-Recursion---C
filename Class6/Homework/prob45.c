#include<stdio.h>


int main()
{
    int num1, num2;
    printf("Enter two integers:\t");
    scanf("%d %d", &num1, &num2);
    int high, lcm = 1;
    if (num1> num2)
    {
       high = num1;
    }
    else
    {
        high = num2;
    }
    while (1)
    {
        if (high%num1 == 0 && high%num2 == 0)
        {
            lcm = high;
            break;
        }
        high++;

    }
    
    printf("LCM = %d", high);
    

    
    return 0;
}