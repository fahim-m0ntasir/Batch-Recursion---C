#include<stdio.h>
int main()
{
    // odd & 1 = 1
    // even & 1 = 0
    int num;
    scanf("%d", &num);
    if (num&1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    
    
    return 0;
}