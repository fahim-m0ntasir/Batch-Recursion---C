#include<stdio.h>


int main()
{
    printf("How many?\t");
    int terms, sum = 0, termcount = 0;
    scanf("%d", &terms);
    for (int  i = 1; termcount < terms; i++)
    {
        if(i%2 == 0)
        {
            termcount++;
            printf("%d", i, termcount);
            sum = sum +i;
        }
        
        printf("\t");
    }
        printf("\nTheir sum is %d", sum);
    
    return 0;
}