#include<stdio.h>


int main()
{
    printf("Line?\t");
    int line;
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}