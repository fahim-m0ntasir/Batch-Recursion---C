#include<stdio.h>


int main()
{
    float wei1 , wei2;
    float avr = (wei1+ wei2)/2;
    printf("Input the weights of 2 items:\t");
    scanf("%f %f", &wei1, &wei2);
    printf("Average weight:\t%f", avr);
    return 0;
}