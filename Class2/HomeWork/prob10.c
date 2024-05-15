#include<stdio.h>


int main()
{
    int seconds;
    printf("Enter the time in seconds:\t");
    scanf("%d", &seconds);
    printf("H/M/S : %d/%d/%d", seconds/3600, (seconds%3600)/60, (seconds%3600)%60);

    return 0;
}