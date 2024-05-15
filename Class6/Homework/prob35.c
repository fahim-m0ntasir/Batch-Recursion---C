#include<stdio.h>


int main()
{
    int terms = 10;
    for (int i = 1, term1 = 0, term2 = 1; i <= terms; i++)
    {
        printf("%d\t", term1);
        term2 = term1+term2;
        term1 = term2 - term1;
    }
    
    return 0;
}