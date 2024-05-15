#include<stdio.h>


int main()
{
    printf("How many?\t");
    int terms, sum = 0;
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        if(i%2 != 0)
        {
            printf("%d ", i);
            sum = sum +i;
        }
        
        printf("\n");
    }
        printf("Their sum is %d", sum);
    
    return 0;
}