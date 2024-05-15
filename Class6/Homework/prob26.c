#include<stdio.h>


int main()
{
    int terms, sum = 0;
    int base = 0;
    printf("Terms?\t");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        base= base*10+1;
        sum= sum +base;
        printf("%d\t", base);
        if (i<terms)
        {
            printf("+\t");
        }
        
    }
    printf("\t=\t%d",sum);
    return 0;
}