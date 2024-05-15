#include<stdio.h>


int main()
{
    int sum =0;
    for (int i = 1; i < 11; i++)
    {
        printf("%d ", i);
        if (i < 10 )
        {
            printf("+ ");
        }
        sum = sum + i;
    }
    printf("= %d", sum);
    
    return 0;
}