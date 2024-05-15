#include<stdio.h>
int checkPerfect(int num)
{
    int sum = 0, factor;
    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
        {
            factor = i;
        sum = sum + factor;
        }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int printperfecto(int start, int end){
    for (int i = start; i <= end; i++)
    {
        if (checkPerfect(i) == 1)
        {
            printf("%d ", i);
        }
        
    }
    
}

int main()
{
    int num1, num2;
    printf("Enter a range:\t");
    scanf("%d %d", &num1, &num2);
    printperfecto(num1, num2);


    return 0;
}