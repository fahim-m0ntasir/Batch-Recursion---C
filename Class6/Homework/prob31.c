#include<stdio.h>


int main()
{
    int lines;
    printf("Lines?\t");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int space = 1; space <= lines - i; space++)
        {
            printf("  ");


        }
        for (int star = 1; star <= 2*i -1; star++)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }
    for (int i = lines -1; i > 0 ; i--)
    {
        for (int space = 1; space <= lines - i; space++)
        {
            printf("  ");


        }
        for (int star = 1; star <= 2*i -1; star++)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }
    
    return 0;
}