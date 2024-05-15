#include<stdio.h>


int main()
{
    int integer;
    printf("Enter the two digit integer:\t");
    scanf("%d", &integer);
    printf("Output:\t%d", (integer/10)*(integer%10));
    return 0;
}