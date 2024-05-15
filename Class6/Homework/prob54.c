#include<stdio.h>
#include<math.h>


int main()
{
    int oct, dec = 0, bin = 0;
    printf("Enter an Octal number:\t");
    scanf("%d", &oct);
    int temp = oct, digit;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%10;
        temp = temp/10;
        dec = dec + digit*pow(8, i);
    }
    temp = dec;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%2;
        temp /=2;
        bin = bin+ digit*pow(10, i);

    }
    printf("OCT(%d) = DEC(%d) = BIN(%d)", oct, dec, bin);
    
    
    return 0;
}