#include<stdio.h>
#include<math.h>
int main()
{
    int oct, dec = 0;
    printf("Octal number:\t");
    scanf("%d", &oct);
    int temp = oct, digit;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%10;
        temp = temp/10;
        dec = dec + digit*pow(8,i);
    }
    printf("OCT(%d) = DEC(%d)", oct, dec);
    return 0;
}