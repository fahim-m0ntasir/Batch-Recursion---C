#include<stdio.h>


int main()
{
    int lines, count = 1;
    printf("Lines?\t");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int space = 1; space <= lines - i; space++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }
    
    return 0;
}