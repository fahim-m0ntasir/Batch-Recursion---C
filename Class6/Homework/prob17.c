#include<stdio.h>
#include<math.h>

int main()
{
    int lines;
    printf("Lines?\t");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int spaces = 1; spaces <= lines - i; spaces++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        
        printf("\n");
    }
    
    return 0;
}