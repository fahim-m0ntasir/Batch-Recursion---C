#include <stdio.h>
#include <math.h>
int main()
{
    int oct;
    scanf("%d", &oct);
    int dec = 0, i=0;
    while (oct !=0)
    {
        dec = dec+(oct%10)*pow(8, i);
        oct/=10;
        i++;
    }
    printf("%d", dec);
    
    
    return 0;
}