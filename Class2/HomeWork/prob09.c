#include<stdio.h>


int main()
{
    int days;
    printf("Enter the number of days:\t");
    scanf("%d", &days);
    printf("Years:\t%d\n", days/365);
    printf("Months:\t%d\n", (days%365)/30);
    printf("Days:\t%d\n", (days%365)%30);
    return 0;
}