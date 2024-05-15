#include<stdio.h>
#include<math.h>

int main()
{
    int bin, dec = 0, oct= 0 ;
    printf("Enter a binary number:\t");
    scanf("%d", &bin);
    int digit, temp = bin;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%10;
        temp /= 10;
        dec = dec + digit*pow(2,i);
    }
    temp = dec;
    for (int i = 0; temp !=0; i++)
    {
        digit = temp%8;
        temp = temp/8;
        oct = oct + digit*pow(10, i);

    }
    printf("BIN(%d) = DEC(%d) = OCT(%d)",bin, dec, oct);
    
    
    return 0;
}