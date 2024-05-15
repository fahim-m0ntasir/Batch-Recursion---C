#include<stdio.h>


int main()
{
    int terms = 5, sum = 0, base = 0;
    for (int i = 1; i <= terms; i++)
    {
            base = base *10 + 9;
            printf("%d\t", base);
            if (i<terms)
            {
                printf("+\t");
            }
            else{
                printf("\t");
            }
            
            sum = sum + base;
    }
    printf("=\t%d", sum);
    
    return 0;
}