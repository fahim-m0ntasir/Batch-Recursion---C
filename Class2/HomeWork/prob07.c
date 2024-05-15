#include<stdio.h>


int main()
{   int product, num1;
    printf("Enter the value of Product:\t\t");
    scanf("%d", &product);
    printf("Enter the value of multiplicand:\t");
    scanf("%d", &num1);
    printf("The other multiplicand is:\t\t%d", product/num1);

    return 0;
}