#include<stdio.h>
#include<math.h>
int dectobin(int decimal){
    int temp = decimal, digit, binary = 0;
    for (int i = 0; temp != 0; i++)
    {
        digit = temp%2;
        temp /=2;
        binary = binary+digit*pow(10, i);
    }
    return binary;
}

int main()
{
    int dec, bin;
    printf("Enter a decimal number:\n");
    scanf("%d", &dec);
    bin = dectobin(dec);
    printf("DEC(%d) = BIN(%d)", dec, bin);
    return 0;
}