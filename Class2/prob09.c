#include<stdio.h>


int main()
{
    int days;
    printf("Enter the number of days:\t");
    scanf("%d", &days);
    printf("Y : M : D  =  %d : %d : %d", days/365, (days%365)/30, (days%365)%30);
    return 0;
}