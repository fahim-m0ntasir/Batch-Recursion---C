#include<stdio.h>


int main()
{
    float spkm;
    printf("Enter the speed in km/h:\t");
    scanf("%f", &spkm);
    printf("%.3fkm/h = %.3fm/s", spkm, spkm/3.6 );
    return 0;
}