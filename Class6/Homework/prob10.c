#include<stdio.h>


int main()
{
    printf("Lines?\t");
    int lines;
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}